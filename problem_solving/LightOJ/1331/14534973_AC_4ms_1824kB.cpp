#include <bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
using namespace std;

double ar(double a, double b, double c){
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double ang(double a, double b, double c){
    a = (b * b) + (c * c) - (a * a);
    a /= (2 * b * c);
    a = acos(a);
    return a * (180 / pi);
}

double arg_ar(double ang, double r){
    double x = ang * pi * r * r;
    return (x / 360);
}

int main(){
    int t, co = 0;
    double r1, r2, r3;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        double a = r2 + r3, b = r1 + r3, c = r1 + r2;
        double area = ar(a, b, c);
        double ang_a = ang(a, b, c);
        double ang_b = ang(b, c, a);
        double ang_c = ang(c, a, b);
        double arg_a = arg_ar(ang_a, r1);
        arg_a += arg_ar(ang_b, r2);
        arg_a += arg_ar(ang_c, r3);
        printf("Case %d: %.10lf\n", ++co, area - arg_a);
    }
    return 0;
}