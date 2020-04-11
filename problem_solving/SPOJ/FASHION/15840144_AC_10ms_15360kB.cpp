#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le], m[le];
int main(){
    //freopen("input.txt", "r", stdin);
    int t, len, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        for(int i = 0; i < len; scanf("%d", &m[i]), i++);
        sort(n, n + len);
        sort(m, m + len);
        long long int sum = 0;
        for(int i = 0; i < len; sum += (n[i] * m[i]), i++);
        printf("%lld\n", sum);
    }
    return 0;
}
