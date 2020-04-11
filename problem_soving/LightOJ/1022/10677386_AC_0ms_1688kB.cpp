#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    double pi = 2 * acos(0.0), r;
    for(int i = 0; i < t; i++){
        scanf("%lf", &r);
        double area_c = pi * pow(r, 2);
        double area_s = 4 * pow(r, 2);
        printf("Case %d: %0.2lf\n", i + 1, area_s - area_c);
    }

    return 0;
}
