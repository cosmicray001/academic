#include <bits/stdc++.h>
#define le 22
using namespace std;
int n[le][4], len, dp[le][4];
int fnc(int i, int j){
    if(i == len) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans;
    if(j == 0) ans = min(fnc(i + 1, 1), fnc(i + 1, 2));
    if(j == 1) ans = min(fnc(i + 1, 0), fnc(i + 1, 2));
    if(j == 2) ans = min(fnc(i + 1, 0), fnc(i + 1, 1));
    return dp[i][j] = n[i][j] + ans;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        for(int i = 0; i < le; i++) for(int j = 0; j < 4; dp[i][j] = -1, j++);
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d %d %d", &n[i][0], &n[i][1], &n[i][2]), i++);
        printf("Case %d: %d\n", ++co, min(fnc(0, 0), min(fnc(0, 1), fnc(0, 2))));
    }
    return 0;
}
