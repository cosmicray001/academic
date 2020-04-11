#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main(){
    int t, co = 0;
    double r, R, n;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf", &R, &n);
        n = (360 / (n * 2)) * (pi / 180);
        r = (R * sin(n)) / (1 + sin(n));
        printf("Case %d: %.10lf\n", ++co, r);
    }
    return 0;
}
