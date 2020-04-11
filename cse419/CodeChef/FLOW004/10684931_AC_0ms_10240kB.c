#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char s[1000010];
    scanf("%d", &t);
    gets(s);
    int i;
    for(i = 0; i < t; i++){
        gets(s);
        int len = strlen(s);
        int sum = (s[0] - '0') + (s[len - 1] - '0');
        printf("%d\n", sum);
    }

    return 0;
}
