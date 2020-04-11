#include <bits/stdc++.h>
#define le 100005
#define ll long long int
using namespace std;
ll n[le], sum, ans, ve;
int main(){
    int t, co = 0, len, q, a, idx;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &q);
        for(int i = 0; i < len; scanf("%lld", &n[i]), i++);
        sum = n[len - 1];
        ans = 0;
        for(int i = len - 2, j = 1; i >= 0; i--, j++){
            ans = ans + j * n[i] - sum;
            sum += n[i];
        }
        printf("Case %d:\n", ++co);
        for(int i = 0; i < q; i++){
            scanf("%d", &a);
            if(a == 1) printf("%lld\n", ans);
            else{
                scanf("%d %lld", &idx, &ve);
                ans = ans + (len - 1 - idx) * (ve - n[idx]) + idx * (n[idx] - ve);
                n[idx] = ve;
            }
        }
    }
    return 0;
}
