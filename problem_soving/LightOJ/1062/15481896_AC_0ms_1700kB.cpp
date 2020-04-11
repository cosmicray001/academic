#include <bits/stdc++.h>
#define le 10004

using namespace std;

double x, y, h1, h2, c, l;
double ok(double ve){
    h1 = sqrt(x * x - ve * ve);
    h2 = sqrt(y * y - ve * ve);
    return ((1.0 / h1) + (1.0 / h2));
}
double fnc(){
    double hi = max(x, y), lo = 0.0, mid;
    int t = 500;
    while(t--){
        mid = (lo + hi) / 2.0;
        if(1.0 / c > ok(mid)) lo = mid;
        else hi = mid;
    }
    return mid;
}
int main(){
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf", &x, &y, &c);
        printf("Case %d: %.10lf\n", ++co, fnc());
    }
    return 0;
}
