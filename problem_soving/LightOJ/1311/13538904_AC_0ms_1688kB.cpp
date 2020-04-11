#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, co = 0;
    double v1, v2, v3, a1, a2;
    double db, d, t1, t2;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        t1 = v1 / a1;
        t2 = v2 / a2;
        db = v3 * max(t1, t2);
        d = (v1 * t1) - (.5 * a1 * t1 * t1);
        d += (v2 * t2) - (.5 * a2 * t2 * t2);
        printf("Case %d: %.8lf %.8lf\n", ++co, d, db);
    }
    return 0;
}
