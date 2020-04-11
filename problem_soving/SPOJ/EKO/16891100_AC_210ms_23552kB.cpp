#include <bits/stdc++.h>
#define ll long long
#define le 1000006
using namespace std;
ll n[le], m;
int len;
ll ok(ll a){
    ll sum = 0;
    for(int i = 0; i < len; i++){
        if(n[i] > a) sum += (n[i] - a);
    }
    return sum;
}
ll fnc(ll a){
    ll hi = a, lo = 0, mid, ans;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        if(ok(mid) >= m){
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    return ans;
}
int main(){
    scanf("%d %lld", &len, &m);
    ll hi = 0;
    for(int i = 0; i < len; scanf("%lld", &n[i]), hi = max(hi, n[i]), i++);
    printf("%lld\n", fnc(hi));
    return 0;
}