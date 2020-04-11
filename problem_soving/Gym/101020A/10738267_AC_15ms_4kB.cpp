#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int x, y;
    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld", &x, &y);
        printf("%lld\n", y * x);
    }

    return 0;
}
