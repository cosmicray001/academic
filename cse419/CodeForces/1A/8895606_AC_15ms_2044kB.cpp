#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n, m, a, amount;
    scanf("%lf %lf %lf", &n, &m, &a);
    amount = ceil(n / a) * ceil(m / a);
    printf("%0.0lf\n", amount);

    return 0;
}
