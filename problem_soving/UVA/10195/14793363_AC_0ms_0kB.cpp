#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double a, b, c, r;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        if(a == 0 || b == 0 || c == 0) printf("The radius of the round table is: 0.000\n");
        else{
            double s = (a + b + c) / 2;
            r = sqrt((s - a) * (s - b) * (s - c) / s);
            printf("The radius of the round table is: %.3lf\n", r);
        }
    }
    return 0;
}
