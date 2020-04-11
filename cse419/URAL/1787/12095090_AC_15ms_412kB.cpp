#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b , c, sum = 0;
    scanf("%d %d", &a, &b);
    while(b--){
        scanf("%d", &c);
        c += sum;
        if(c > a) sum = c - a;
        else sum = 0;
    }
    printf("%d\n", sum);

    return 0;
}
