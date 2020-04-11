#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0, i = 1, num1 = 0, num2 = 0, sum = 0, m = 0;
    scanf("%d", &t);
    for(; i <= t; i++)
    {
        scanf("%d %d", &num1, &num2);
        if(num1 % 2 == 0)
        {
            m = num1 + 1;
        }
        else
            m = num1;
        sum = 0;
        for(int c = m; c <= num2; c += 2)
        {
            sum = sum + c;
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
