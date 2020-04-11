#include <bits/stdc++.h>

using namespace std;
int len;
int n[2009];

int fnc(int key, int st){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = (lo + hi) / 2;
        if(key >= n[mid]) lo = mid + 1;
        else hi = mid - 1;
    }
    return (lo - st - 1);
}

int main(){
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        sort(n, n + len);
        int sum = 0;
        for(int i = 0; i < len; i++){
            for(int j = i + 1; j < len - 1; j++){
                int temp = n[i] + n[j] - 1;
                sum += fnc(temp, j);
            }
        }
        printf("Case %d: %d\n", ++co, sum);
    }
    return 0;
}
