#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];
int lo(int a, int len){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(a <= n[mid]) hi = mid - 1;
        else lo = mid + 1;
    }
    return lo;
}
int hi(int a, int len){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(a >= n[mid]) lo = mid + 1;
        else hi = mid - 1;
    }
    return lo;
}
int main(){
    int t, co = 0, len, q, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &q);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        printf("Case %d:\n", ++co);
        while(q--){
            scanf("%d %d", &a, &b);
            printf("%d\n", hi(b, len) - lo(a, len));
        }
    }
    return 0;
}
