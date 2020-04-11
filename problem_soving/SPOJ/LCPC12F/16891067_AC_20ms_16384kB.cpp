#include <bits/stdc++.h>
#define le 100005
#define ll long long
using namespace std;
ll n[le], len, x;
int fnc1(ll l, ll ve){
    ll hi = len - 1, lo = l, mid, ans;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        if(n[mid] + ve >= x) hi = mid - 1;
        else lo = mid + 1;
    }
    return lo;
}
int fnc2(ll l, ll ve){
    ll hi = len - 1, lo = l, mid;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        if(n[mid] + ve <= x) lo = mid + 1;
        else hi = mid - 1;
    }
    return lo;
}
int main(){
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%lld %lld", &x, &len);
        for(ll i = 0; i < len; scanf("%lld", &n[i]), i++);
        sort(n, n + len);
        ll ans = 0;
        for(ll i = 0; i < len - 1; i++){
            ans += (fnc2(i + 1, n[i]) - fnc1(i + 1, n[i]));
        }
        printf("%d. %lld\n", ++co, ans);
    }
    return 0;
}