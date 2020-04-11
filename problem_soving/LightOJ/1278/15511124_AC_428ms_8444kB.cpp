#include <bits/stdc++.h>
#define le 10000007
#define ll long long int
using namespace std;
int n[le >> 6];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
vector<int> v;
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int fnc(ll a){
    int ans = 1;
    while(a % 2 == 0) a /= 2;
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        //if(!ck(a)) break;
        if(a % v[i] == 0){
            int c = 0;
            while(a % v[i] == 0){
                c++;
                a /= v[i];
            }
            c++;
            ans *= c;
        }
    }
    if(a != 1) ans = ans * 2;
    return ans - 1;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    int t, co = 0;
    ll a;
    for(scanf("%d", &t); t--; ){
        scanf("%lld", &a);
        printf("Case %d: %d\n", ++co, fnc(a));
    }
    return 0;
}
