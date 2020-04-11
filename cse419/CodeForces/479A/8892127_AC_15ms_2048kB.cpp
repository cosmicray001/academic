#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maxi = 0;
    if((a + b * c) > maxi)
    {
        maxi = a + b * c;
    }
    if((a * (b + c)) > maxi)
    {
        maxi = a * (b + c);
    }
    if((a * b * c) > maxi)
    {
        maxi = a * b * c;
    }
    if(((a + b) * c) > maxi)
    {
        maxi = (a + b) * c;
    }
    if(((a * b) + c) > maxi)
    {
        maxi = (a * b) + c;
    }
    if((a + b + c) > maxi)
    {
        maxi = a + b + c;
    }
    printf("%d\n", maxi);

    return 0;
}
