#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, l;
    scanf("%d %d", &h, &l);
    int temp = h + l - 1;
    printf("%d %d\n", temp - h, temp - l);

    return 0;
}
