#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, co = 0;
    double a, b, c;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf", &a, &b, &c);
        double d1 = (a * c) / b;
        if(b - d1 < 1) printf("Case %d: -1\n", ++co);
        else{
            double d = ((d1 + c) * (a + d1)) / (b - d1);
            printf("Case %d: %.10lf\n", ++co, d1 + d);
        }
    }
    return 0;
}
