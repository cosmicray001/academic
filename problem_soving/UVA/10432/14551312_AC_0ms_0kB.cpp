#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double r, n;
    while(scanf("%lf %lf", &r, &n) != EOF){
        double are = r * r * sin((2 * pi) / n) * .5;
        printf("%.3lf\n", n * are);
    }
    return 0;
}
