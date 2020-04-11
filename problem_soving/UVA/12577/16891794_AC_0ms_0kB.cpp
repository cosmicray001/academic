#include<bits/stdc++.h>

using namespace std;

int main()
{
    char n[5];
    for(int c = 1; n[0] != '*'; c++)
    {
        scanf("%s", &n);

        if(n[0] == 'H')
        {
            printf("Case %d: Hajj-e-Akbar\n", c);
        }
        else if(n[0] == 'U')
        {
            printf("Case %d: Hajj-e-Asghar\n", c);
        }
    }

    return 0;
}