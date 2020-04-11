#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n;
    while(scanf("%d", &n) != EOF){
        scanf("%d", &a);
        int sq = pow(n, 2) - a;
        printf("%d\n", sq);
    }

    return 0;
}
