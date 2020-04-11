#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double area, rad, pi = 2 * acos(0.0);
    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        scanf("%lf", &rad);
        area = (4 * rad * rad) - (pi * rad * rad);
        printf("Case %d: %0.2lf\n", i, area);


    }
    return 0;
}
