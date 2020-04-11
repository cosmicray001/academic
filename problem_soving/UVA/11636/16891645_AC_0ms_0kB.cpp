#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 0;
    while(scanf("%d", &t) != EOF && t >= 0){
        double re = (log10(t)) / (log10(2));
        re = ceil(re);
        printf("Case %d: %0.0lf\n", ++i, re);
    }
    return 0;
}