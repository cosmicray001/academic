#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n, k;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &n, &k);
        int sum = 0;
        for(int j = 0; j < n; j++){
            int tem;
            scanf("%d", &tem);
            sum += tem;
        }
        int re = (n + 1) * k - sum;
        printf("Case %d: %d\n", i, re);
    }

    return 0;
}
