#include <bits/stdc++.h>
using namespace std;
int main(){
    double r, a , pi = 2 * acos(0.0);
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%lf", &r);
        a = (4 * r * r) - (pi * r * r);
        printf("Case %d: %.2lf\n", ++co, a);
    }
    return 0;
}
