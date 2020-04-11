#include <bits/stdc++.h>
#define le 1003

using namespace std;
int n[le];

int fnc1(int mid, int len){
    int sum  = 0, c = 1;
    for(int i = 0; i < len; i++){
        sum += n[i];
        if(sum > mid){
            sum = n[i];
            c++;
        }
    }
    return c;
}

int fnc(int hi, int lo, int len, int can){
    int mid, ans;
    while(lo <= hi){
        mid = (lo + hi) / 2;
        if(fnc1(mid, len) > can) lo = mid + 1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }
    return ans;
}

int main(){
    int t, co = 0, len, can;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &can);
        int sum = 0, maxx = 0;
        for(int i = 0; i < len; scanf("%d", &n[i]), sum += n[i], maxx = max(maxx, n[i]), i++);
        int ans = 0;
        if(can >= len) ans = maxx;
        else ans = fnc(sum, maxx, len, can);
        printf("Case %d: %d\n", ++co, ans, can);
    }
    return 0;
}
