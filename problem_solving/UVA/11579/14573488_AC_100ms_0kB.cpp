#include <bits/stdc++.h>
#define le 10004
using namespace std;
double n[le], x;
double fnc(double a, double b, double c){
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%lf", &n[i]), i++);
        sort(n, n + len);
        double ve = 0.0;
        for(int i = len - 1; i > 1; i--){
            if(n[i] < n[i - 1] + n[i - 2]){
                ve = max(ve, fnc(n[i], n[i - 1], n[i - 2]));
            }
        }
        printf("%.2lf\n", ve);
    }
    return 0;
}
