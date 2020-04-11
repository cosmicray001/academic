#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    double n, m, a;
    while(scanf("%lf%lf%lf",&n,&m,&a) != EOF){
        double l1 = ceil(n / a);
        double l2 = ceil(m / a);
        printf("%.0lf\n",l1 * l2);
    }
    return 0;
}
