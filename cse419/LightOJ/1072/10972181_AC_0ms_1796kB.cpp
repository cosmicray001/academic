#include <bits/stdc++.h>

using namespace std;

int main()
{
    double pi = acos(-1.0);
    int t, i = 0, n;
    double r, ang;
    scanf("%d", &t);
    while(t--){
        double ans;
        scanf("%lf", &r);
        scanf("%d", &n);
        if(n == 2) ans = r / n;
        else{
            ang = 360.0 / (2.0 * n);
            ang = (ang * pi) / 180.0;
            ans = (r * sin(ang)) / (1 + sin(ang));
        }
        printf("Case %d: %.10lf\n", ++i, ans);
    }

    return 0;
}
