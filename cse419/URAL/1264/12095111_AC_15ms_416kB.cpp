#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    a = a * ++b;
    printf("%lld\n", a);

    return 0;
}
