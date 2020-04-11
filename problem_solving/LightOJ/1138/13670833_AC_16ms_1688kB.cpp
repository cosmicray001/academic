#include <bits/stdc++.h>
#define le 1000000000
#define ll long long
using namespace std;

ll fnc1(ll a){
    ll re = a / 5;
    if(re < 1) return 0;
    return re + fnc1(re);
}
ll fnc(ll key){
    ll hi = le, lo = 0, mid, ans = 0;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        ll x = fnc1(mid);
        if(key == x){
            ans = mid;
            hi = mid - 1;
        }else if(x > key) hi = mid - 1;
        else lo = mid + 1;
    }
    return ans;
}
int main(){
    int t, co = 0;
    ll n;
    for(scanf("%d", &t); t--; ){
        scanf("%lld", &n);
        printf("Case %d: ", ++co);
        ll ans = fnc(n);
        if(!ans) printf("impossible\n");
        else printf("%lld\n", ans);
    }
    return 0;
}
