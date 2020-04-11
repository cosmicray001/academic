#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int m = n - 2;
    long long int sum = (m*(m+1)*1.0) / 2.0;
    printf("%lld\n", sum + n);

    return 0;
}
