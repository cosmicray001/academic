#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    for(; ; )
    {
        scanf("%d %d", &n1, &n2);
        if(n1 == 0 && n2 == 0)
        {
            break;
        }
        else
        {
            int c = 0;
            for(int i = n1; i <= n2; i++)
            {
                int m = sqrt(i);

                if(m*m == i)
                {
                    c++;

                }
            }
            printf("%d\n", c);
        }
    }
    return 0;
}
