#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, co = 0;
    double v1, v2, v3, a1, a2;
    scanf("%d", &t);
    while(t--){
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        double ti = v1 / a1;
        double t1 = v2 / a2;
        double d = (v1* ti) - (.5 * a1 * pow(ti, 2));
        d += (v2 * t1) - (.5 * a2 * pow(t1, 2));
        ti = max(ti, t1);
        printf("Case %d: %.10lf %.10lf\n", ++co, d, ti*v3);
    }

    return 0;
}
