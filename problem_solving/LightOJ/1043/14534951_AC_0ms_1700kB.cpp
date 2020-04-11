#include <bits/stdc++.h>
using namespace std;
double ab, ac, bc, abc, def, rto;
double fnc(double a, double b, double c){
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double ok(double ad){
    double de = (ad * bc) / ab;
    double ae = (ad * ac) / ab;
    def = fnc(ad, de, ae);
    return def / (abc - def);
}
double fnc1(){
    double lo = 0.0, hi = ab, mid;
    int t = 100;
    while(t--){
        mid = (lo + hi) / 2;
        if(ok(mid) > rto) hi = mid;
        else lo = mid;
    }
    return mid;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf %lf", &ab, &ac, &bc, &rto);
        abc = fnc(ab, ac, bc);
        printf("Case %d: %.10lf\n", ++co, fnc1());
    }
    return 0;
}
