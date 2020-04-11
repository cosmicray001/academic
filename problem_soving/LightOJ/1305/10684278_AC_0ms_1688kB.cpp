#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int ax, ay, bx, by, cx, cy, dx, dy;
    double x, y, area;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        x = (ax + cx)* 1.0 / 2.0;
        y = (ay + cy)* 1.0 / 2.0;
        dx = 2 * x - bx;
        dy = 2 * y - by;
        int pre_area = (ax * by + bx * cy + cx * dy + dx * ay) - (ay * bx + by * cx + cy * dx + dy * ax);
        double area = 0.5 *pre_area;
        if(area < 0) area *= -1;
        printf("Case %d: %d %d %0.0lf\n", i, dx, dy, area);
    }

    return 0;
}
