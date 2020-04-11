#include <bits/stdc++.h>

using namespace std;

double fnc1(double a, double b, double d){
    double h1 = 1.0 / sqrt(a * a - d * d);
    double h2 = 1.0 / sqrt(b * b - d * d);
    h1 += h2;
    return 1.0 / h1;
}

double fnc(double a, double b, double c){
    double mid, hi = min(a, b), lo = 0.0;
    int t = 500;
    while(t--){
        mid = (lo + hi) / 2.0;
        double x = fnc1(a, b, mid);
        if(x < c) hi = mid;
        else lo = mid;
    }
    return lo;
}

int main(){
    int t, co = 0;
    double a, b, c;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("Case %d: %.10lf\n", ++co, fnc(a, b, c));
    }
    return 0;
}
