#include <bits/stdc++.h>
using namespace std;
double fnc(double a, double b, double c){
    double s = (a + b + c) / 2;
    s = sqrt(s * (s - a) * (s - b) * (s - c));
    return (s * 2) / a;
}
int main(){
    int t, co = 0;
    double a, b, c, d, are;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        are = fnc(fabs(a - c), d, b) * .5 * (a + c);
        printf("Case %d: %.7lf\n", ++co, are);
    }
    return 0;
}
