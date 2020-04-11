#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    int n[3];
    while(scanf("%d", &t) != EOF){
        for(int i = 1; i <= t; i++){
            for(int j = 0; j < 3; j++){
                scanf("%d", &n[j]);
            }

            for(int k = 0; k < 3; k++){
                for(int c = k + 1; c < 3; c++){
                    if(n[k] > n[c]){
                        int temp = n[k];
                        n[k] = n[c];
                        n[c] = temp;
                    }
                }
            }
            printf("Case %d: %d\n", i, n[1]);
        }
    }

    return 0;
}
