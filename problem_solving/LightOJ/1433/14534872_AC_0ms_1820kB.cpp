#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int t, co = 0;
    double x, y, a, b, p, q;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf %lf %lf %lf", &x, &y, &a, &b, &p, &q);
        double i = sqrt((x - a) * (x - a) + (y - b) * (y - b));
        double j = sqrt((a - p) * (a - p) + (b - q) * (b - q));
        double ang = acos((i * i + i * i - j * j) / (2 * i * i));
        printf("Case %d: %.10lf\n", ++co, ang * i);
    }
    return 0;
}
