#include <bits/stdc++.h>
#define le 2003
using namespace std;
int n[le];
int fnc(int len, int key){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        if(n[mid] <= key) lo = mid + 1;
        else hi = mid - 1;
    }
    return lo;
}
int main(){
    int len;
    while(scanf("%d", &len) != EOF && len){
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        sort(n, n + len);
        int ans = 0;
        for(int i = 0; i < len - 2; i++){
            for(int j = i + 1; j < len - 1; j++){
                ans += (len - fnc(len, n[i] + n[j]));
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}