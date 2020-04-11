#include <bits/stdc++.h>
#define le 10004
#define pi acos(-1.0)
using namespace std;
double hi, n[le];
int len, f;
int fnc1(double a){
    int c = 0;
    for(int i = 0; i < len; c += (int)(n[i] / a), i++);
    return c;
}
double fnc(){
    double lo = 0.0, mid;
    for(int i = 64; i--; ){
        mid = (lo + hi) / 2.0;
        if(fnc1(mid) >= f) lo = mid;
        else hi = mid;
    }
    return (lo + hi) / 2.0;
}
int main(){
    int t;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &f);
        f++;
        hi = 0;
        for(int i = 0; i < len; scanf("%lf", &n[i]), n[i] = (n[i] * n[i] * pi), hi = max(hi, n[i]), i++);
        printf("%.4lf\n", fnc());
    }
    return 0;
}
