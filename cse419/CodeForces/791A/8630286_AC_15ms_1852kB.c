#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i = 0, x = 1, y = 1, flag = 1;
    scanf("%d %d", &a, &b);
    x = x * a * 3;
    y = y * b * 2;
    if(x > y)
    {
        printf("%d\n", 1);
    }
    else
    {

        for(i = 1; flag != 0; i++)
        {
            x = x * 3;
            y = y * 2;
            if(x > y)
            {
                flag = 0;
            }
        }
        printf("%d\n", i);
    }
    return 0;
}
