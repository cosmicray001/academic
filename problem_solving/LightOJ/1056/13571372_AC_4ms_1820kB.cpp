#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, co = 0;
    double a, b, r, s, tha;
    for(scanf("%d", &t); t--; ){
        scanf("%lf : %lf", &a, &b);
        r = sqrt(a * a + b * b);
        r /= 2.0;
        tha = acos((r * r + r * r - b * b) / (2.0 * r * r));
        s = r * tha;
        double x = 200.0 / (s + a);
        printf("Case %d: %.10lf %.10lf\n", ++co, a * x, b * x);
    }
    return 0;
}
