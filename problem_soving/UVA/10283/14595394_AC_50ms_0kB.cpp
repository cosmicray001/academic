#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
double fnc(double a, double b, double c){
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double R, n, r, a, p, x2, x3;
    while(scanf("%lf %lf", &R, &n) != EOF){
        r = (R * sin(pi / n)) / (1 + sin(pi / n));
        if(n == 1) r = R;
        if(n <= 2) x2 = 0;
        else{
            a = r + r;
            p = R - r;
            x2 = n * fnc(a, p, p);
            double arc = n * (pi * r * r * (((n - 2) * 180) / n)) / 360;
            x2 -= arc;
        }
        x3 = (pi * R * R) - (n * pi * r * r) - x2;
        printf("%.10lf %.10lf %.10lf\n", r, x2, x3);
    }
    return 0;
}
