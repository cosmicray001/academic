#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(; n >= 2; )
    {
        n = n - 2;
    }
    if(n == 1)
    {
        printf("Alice\n");
    }
    else
    {
        printf("Bob\n");
    }
    return 0;
}
