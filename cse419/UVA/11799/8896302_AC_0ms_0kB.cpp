#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, num;
    while(scanf("%d", &n) == 1)
    {
        for(int i = 1; i <= n; i++)
        {
            int x;
            scanf("%d", &x);
            int max_value = -100;
            for(int c = 1; c <= x; c++)
            {
                scanf("%d", &num);
                if(num > max_value)
                {
                    max_value = num;
                }
            }
            printf("Case %d: %d\n", i, max_value);
        }

    }
    return 0;
}
