#include <bits/stdc++.h>
#define le 10000007
#define ll long long int
using namespace std;
int n[le >> 6];
vector<int> v;
vector<ll> p;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
void fnc(ll a){
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            while(a % v[i] == 0) a /= v[i];
            p.push_back(v[i]);
        }
    }
    if(a != 1) p.push_back(a);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    ll a;
    while(scanf("%lld", &a) != EOF && a){
        fnc(abs(a));
        if(p.size() > 1) printf("%lld\n", p[p.size() - 1]);
        else printf("-1\n");
        p.clear();
    }
}
