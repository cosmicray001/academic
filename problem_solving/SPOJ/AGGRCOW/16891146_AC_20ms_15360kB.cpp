#include <bits/stdc++.h>
#define le 100005
#define ll long long
using namespace std;
int n[le], len, c;
int ok(int a){
    int cu = 1, temp = n[0];
    for(int i = 1; i < len; i++){
        if(n[i] - temp >= a){
            cu++;
            temp = n[i];
        }
    }
    return cu;
}
int fnc(int lo, int hi){
    int mid, ans;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        if(ok(mid) >= c){
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    return ans;
}
int main(){
    int t;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &c);
        int hi = 0;
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        sort(n, n + len);
        printf("%d\n", fnc(n[0], n[len - 1]));
    }
    return 0;
}