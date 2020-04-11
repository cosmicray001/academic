#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int pil[50];
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int len, hi = 0, lo = 0;
        scanf("%d", &len);
        scanf("%d", &pil[0]);
        for(int j = 1; j < len; j++){
            scanf("%d", &pil[j]);
            if(pil[j] > pil[j - 1]) hi++;
            else if(pil[j] < pil[j - 1]) lo++;
        }
        printf("Case %d: %d %d\n", i, hi, lo);

    }

    return 0;
}
