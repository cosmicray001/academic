#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    double s, pre_x, pre_y, x, y;
    for(int i = 1; i <= t; i++){
        scanf("%lf", &s);
        pre_y = sqrt(s);
        pre_y = ceil(pre_y);
        pre_x = pow(pre_y, 2) - s;
        if(pre_x < pre_y){
            x = ++pre_x;
            y = pre_y;
        }
        else{
            y=(2 * pre_y) - pre_x - 1;
            x = pre_y;
        }
        if((int)pre_y % 2 == 0){
            int temp = x;
            x = y;
            y = temp;
        }
        printf("Case %d: %0.0lf %0.0lf\n", i, x, y);
    }

    return 0;

}
