#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        double s = (a + b + c) / 2;
        double x2 = sqrt(s * (s - a) * (s - b) * (s - c));
        double r = sqrt((s - a) * (s - b) * (s - c) / s);
        double x3 = pi * r * r;
        double r1 = (a * b * c) / (sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)));
        double x1 = (pi * r1 * r1) - x2;
        x2 -= x3;
        printf("%.4lf %.4lf %.4lf\n", x1, x2, x3);
    }
    return 0;
}
