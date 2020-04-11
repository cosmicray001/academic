#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];

int fnc(int len, int key){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(key == n[mid])hi = mid - 1;
        else if(key < n[mid]) hi = mid - 1;
        else lo = mid + 1;
    }
    return lo;
}

int fnc1(int len, int key){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(key == n[mid]) lo = mid + 1;
        else if(key < n[mid]) hi = mid - 1;
        else lo = mid + 1;
    }
    return lo;
}

int main(){
    int t, co = 0, len, q, a, b;
    for(scanf("%d", &t); t--; ){
        printf("Case %d:\n", ++co);
        scanf("%d %d", &len, &q);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        while(q--){
            scanf("%d %d", &a, &b);
            int sum = fnc1(len, b);
            sum -= fnc(len, a);
            printf("%d\n", sum);
        }
    }
    return 0;
}
