#include <bits/stdc++.h>
#define pi 3.141592653589793
using namespace std;
double fnc(double x, double y, double x1, double y1){
    x -= x1;
    y -= y1;
    return sqrt(x * x + y * y);
}
int main(){
    double ax, ay, bx, by, cx, cy, a, b, c;
    while(scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy) != EOF){
        a = fnc(ax, ay, bx, by);
        b = fnc(bx, by, cx, cy);
        c = fnc(cx, cy, ax, ay);
        double r = (a * b * c) / sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
        printf("%.2lf\n", 2 * pi * r);
    }
    return 0;
}
