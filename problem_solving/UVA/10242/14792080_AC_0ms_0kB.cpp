#include <bits/stdc++.h>
using namespace std;
int main(){
    double ax, ay, bx, by, cx, cy, dx, dy, a, b;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy) != EOF){
        if(ax == cx && ay == cy){
            a = bx + dx - ax;
            b = by + dy - ay;
        }else if(ax == dx && ay == dy){
            a = bx + cx - ax;
            b = by + cy - ay;
        }else if(bx == cx && by == cy){
            a = ax + dx - bx;
            b = ay + dy - by;
        }else{
            a = ax + cx - bx;
            b = ay + cy - by;
        }
        printf("%.3lf %.3lf\n", a, b);
    }
    return 0;
}
