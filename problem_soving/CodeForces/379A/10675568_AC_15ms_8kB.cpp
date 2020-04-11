#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a;
    for(; a >= b; ){
        sum += a / b;
        a = (a / b) + (a % b);
    }
    printf("%d\n", sum);

    return 0;
}
