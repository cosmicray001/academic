#include <bits/stdc++.h>
using namespace std;
double fnc(double a, double b, double c){
    return (2 / 3.0) * (sqrt(2 * a * a + 2 * b * b - c * c));
}
double ar(double a, double b, double c){
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double a, b, c, x, y, z;
    while(scanf("%lf %lf %lf", &x, &y, &z) != EOF){
        double a1 = fnc(x, y, z);
        double b1 = fnc(y, z, x);
        double c1 = fnc(z, x, y);
        a = max(a1, max(b1, c1));
        b = min(a1, min(b1, c1));
        c = (a1 + b1 + c1) - (a + b);
        if(a < (b + c)) printf("%.3lf\n", ar(a, b, c));
        else printf("-1.000\n");
    }
    return 0;
}
