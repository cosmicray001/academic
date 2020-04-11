#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le], len, cap;
int ok(int a){
    int sum = 0, c = 1;
    for(int i = 0; i < len; i++){
        sum += n[i];
        if(sum > a){
            sum = n[i];
            c++;
        }
    }
    return c;
}
int fnc(int lo, int hi){
    int mid, ans;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        int x = ok(mid);
        if(x == cap){
            ans = mid;
            hi = mid - 1;
        }
        else if(x > cap) lo = mid + 1;
        else hi = mid - 1;
    }
    return ans;
}
int main(){
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &cap);
        int sum = 0, hi = 0;
        for(int i = 0; i < len; scanf("%d", &n[i]), sum += n[i], hi = max(hi, n[i]), i++);
        if(cap >= len) printf("Case %d: %d\n", ++co, hi);
        else printf("Case %d: %d\n", ++co, fnc(hi, sum));
    }
    return 0;
}
