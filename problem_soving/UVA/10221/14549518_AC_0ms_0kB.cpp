#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
double fnc(double a, double b){
    return sqrt((a * a + a * a) - (2 * a * a * cos(b)));
}
int main(){
    double a, b;
    char ch[4];
    while(scanf("%lf %lf %s", &a, &b, ch) != EOF){
        a += 6440;
        if(b > 180) b = 360 - b;
        if(ch[0] == 'm') b /= 60;
        b = (pi * b) / 180;
        printf("%.6lf %.6lf\n", a * b, fnc(a, b));
    }
    return 0;
}
