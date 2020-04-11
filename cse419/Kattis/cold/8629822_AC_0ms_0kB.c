#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0, c, temp;
    scanf("%d", &n);
    for(c = 0; c < n; c++)
    {
        scanf("%d", &temp);
        if(temp < 0)
        {
            i++;
        }
    }
    printf("%d\n", i);
    return 0;
}
