#include <bits/stdc++.h>
#define le 10004
#define ll long long
#define mod 10000007
using namespace std;
ll n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, x;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &x);
        for(int i = 6; i <= x; i++){
            n[i] = n[i - 1] + n[i - 2] + n[i - 3] + n[i - 4] + n[i - 5] + n[i - 6];
            n[i] = n[i] % mod;
        }
        printf("Case %d: %d\n", ++co, n[x] % mod);
    }
    return 0;
}
