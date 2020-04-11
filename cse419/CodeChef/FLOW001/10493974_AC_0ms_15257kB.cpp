#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, t;
    while(scanf("%d",&t) != EOF){
        for(int i = 0; i < t; i++){
            scanf("%d %d", &a, &b);
            printf("%d\n", a + b);
        }
    }

    return 0;
}
