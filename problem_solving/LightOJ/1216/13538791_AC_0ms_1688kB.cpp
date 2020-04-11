#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main(){
    int t, co = 0;
    double r1, r2, r3, h, p;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);
        r3 = r1 - ((r1 - r2) * (h - p)) / h;
        double vol = (pi * p * (r2 * r2 + r2 * r3 + r3 * r3)) / 3.0;
        printf("Case %d: %.8lf\n", ++co, vol);
    }
    return 0;
}
