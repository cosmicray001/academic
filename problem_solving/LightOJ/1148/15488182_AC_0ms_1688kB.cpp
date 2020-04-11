#include <bits/stdc++.h>
#define le 55
using namespace std;
int n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    int t, co = 0, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        sort(n, n + len);
        int ans = 0;
        for(int i = 0, j = 0; i < len; i++){
            if(i == 0 || n[i] != n[i - 1]) ans += n[i] + 1;
            else{
                j++;
                if(j > n[i]){
                    ans += n[i] + 1;
                    j = 0;
                }
            }
        }
        printf("Case %d: %d\n", ++co, ans);
    }
    return 0;
}
