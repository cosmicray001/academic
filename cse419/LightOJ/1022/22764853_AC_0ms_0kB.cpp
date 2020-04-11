#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i = 0;
    double r, pi = 2 * acos(0.0);
    scanf("%d", &t);
    while(t--){
        scanf("%lf", &r);
        double re_a = 4 * pow(r, 2);
        double cir_a = pi * pow(r, 2);
        printf("Case %d: %0.2lf\n", ++i, re_a - cir_a);
    }

    return 0;
}
