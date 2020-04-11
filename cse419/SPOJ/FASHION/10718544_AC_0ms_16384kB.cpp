#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int x;
    int n[1010];
    int m[1010];
    for(int i = 0; i < t; i++){
        scanf("%d", &x);
        for(int j = 0; j < x; j++) scanf("%d", &n[j]);
        sort(n, n + x);
        for(int j = 0; j < x; j++) scanf("%d", &m[j]);
        sort(m, m + x);
        int sum = 0;
        for(int j = 0; j < x; j++) sum += n[j] * m[j];
        printf("%d\n", sum);
    }

    return 0;
}
