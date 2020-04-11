#include <bits/stdc++.h>
#define le 104
using namespace std;
bool n[le >> 1];
vector<int> p;
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2){
        if(!n[i >> 1]) for(int j = i * i, k = i << 1; j < le; j += k) n[j >> 1] = 1;
    }
    p.push_back(2);
    for(int i = 3; i < le; i += 2){
        if(!n[i >> 1]) p.push_back(i);
    }
}
int fnc(int n){
    int ret = 1;
    for(int i = 0; i < p.size() && p[i] * p[i] <= n; i++){
        if(n % p[i] == 0){
            int c = 0;
            while(n % p[i] == 0){
                n /= p[i];
                c++;
            }
            c++;
            ret *= c;
        }
    }
    if(n > 1) ret *= 2;
    return ret;
}
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}
int main(){
    se();
    int t, co = 0, num;
    vector<pair<int, int> > v;
    for(int i = 1; i <= 1000; i++){
        v.push_back(make_pair(fnc(i), i));
    }
    sort(v.begin(), v.end(), cmp);
    for(scanf("%d", &t); t--; ){
        scanf("%d", &num);
        printf("Case %d: %d\n", ++co, v[num - 1].second);
    }
    return 0;
}