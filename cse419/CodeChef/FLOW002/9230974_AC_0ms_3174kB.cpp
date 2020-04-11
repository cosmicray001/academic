#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0;
    while(scanf("%d", &t) != EOF){
        int a = 0, b = 0;
        for(int i = 0; i < t; i++){
            scanf("%d %d", &a, &b);
            int re = a % b;
            printf("%d\n", re);
        }
    }

    return 0;
}
