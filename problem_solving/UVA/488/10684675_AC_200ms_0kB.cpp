#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a, f;
    scanf("%d", &t);
    for(int z = 0; z < t; z++){
        scanf("%d %d", &a, &f);
        for(int y = 0; y < f; y++){
            for(int i = 1; i <= a; i++){
                for(int j = 0; j < i; j++){
                    printf("%d", i);
                }
                printf("\n");
            }
            for(int i = a - 1; i > 0; i--){
                for(int j = 0; j < i; j++){
                    printf("%d", i);
                }
                printf("\n");
            }
            if(z != t - 1 || y != f - 1) printf("\n");
        }
    }

    return 0;
}
