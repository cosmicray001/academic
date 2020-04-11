#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int t, n, k, x, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &n, &k);
        int sum = 0;
        for(int i = 0; i < n; scanf("%d", &x), sum += x, i++);
        printf("Case %d: %d\n", ++co, (n + 1) * k - sum);
    }
    return 0;
}
