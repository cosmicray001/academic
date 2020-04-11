#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];
bool fnc(int a, int b, int key){
    int lo = a + 1, hi = b - 1, mid;
    while(lo <= hi){
        mid = (lo + hi) >> 1;
        if(n[mid] == key) return 1;
        else if(n[mid] > key) hi = mid - 1;
        else lo = mid + 1;
    }
    return 0;
}
int main(){
    int t, len, m;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &m);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        sort(n, n + len);
        int c = 0;
        for(int i = 0; i < len - 1; i++){
            int ve = m - n[i];
            if(fnc(i, len, ve)) c++;
        }
        printf("%d\n", c);
    }
    return 0;
}