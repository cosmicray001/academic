#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    double m, n, a;
    scanf("%lf %lf %lf", &n, &m, &a);
    printf("%0.0lf\n", ceil(n / a) * ceil(m / a));

    return 0;
}
