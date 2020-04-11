#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, sum = 0;
    scanf("%d", &x);
    int n[x];
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &n[i]);
        sum = sum + n[i];
    }
    printf("%d\n", sum);
    return 0;

}
