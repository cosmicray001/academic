#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
const double eps = 1e-8;
double a, b, x, y, i, j, ang, ang1, dis, r;
double fnc(){
    dis = sqrt((x - a) * (x - a) + (y - b) * (y - b));
    if(dis <= fabs(i - j)){
        r = min(i, j);
        return pi * r * r;
    }
    if(dis > i + j) return 0;
    ang = acos((i * i + dis * dis - j * j) / (2.0 * dis * i));
    ang1 = acos((j * j + dis * dis - i * i) / (2.0 * dis * j));
    return (i * i * ang) + (j * j * ang1) - (i * dis * sin(ang));
}
int main(){
   // freopen("input.txt", "r", stdin);
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &x, &y, &j);
        printf("Case %d: %.10lf\n", ++co, fnc());
    }
    return 0;
}
