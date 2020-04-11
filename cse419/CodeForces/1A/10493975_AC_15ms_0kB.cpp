#include <stdio.h>

using namespace std;

int main(void)
{
    long long int n, m, a;

    while(scanf("%lld %lld %lld", &m, &n, &a) != EOF){
        long long int l1 = (m + a - 1) / a;
        long long int l2 = (n + a - 1) / a;

        printf("%lld\n", l1 * l2);
    }

    return 0;
}
