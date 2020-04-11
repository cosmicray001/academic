#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b;
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld", &a, &b);
        if(b % a != 0) printf("-1\n");
        else printf("%lld %lld\n", a, b);
    }

    return 0;
}
