#include <bits/stdc++.h>
#define le 32767
#define ll long long int
using namespace std;
int n[le >> 6];
vector<int> v;
vector<int> p;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
void fnc(ll a){
    vector<int> pri;
    bool f = false;
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            int p = 0;
            while(a % v[i] == 0){
                a /= v[i];
                p++;
            }
            pri.push_back(p);
            pri.push_back(v[i]);
        }
    }
    if(a != 1){
        pri.push_back(1);
        pri.push_back(a);
    }
    for(int i = pri.size() - 1; i > 1; printf("%d %d ", pri[i], pri[i - 1]), i -= 2);
    printf("%d %d\n", pri[1], pri[0]);
    return;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    string s;
    while(getline(cin, s) && s[0] != '0'){
        int x = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                p.push_back(x);
                x = 0;
            }
            else x = x * 10 + s[i] - '0';
        }
        p.push_back(x);
        ll ans = 1;
        for(int i = 0; i < p.size(); i += 2) ans *= pow(p[i], p[i + 1]);
        fnc(ans - 1);
        p.clear();
    }
    return 0;
}