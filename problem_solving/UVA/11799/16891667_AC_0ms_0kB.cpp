#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, t1;
    while(scanf("%d", &t) != EOF){
        for(int i = 1; i <= t; i++){
            scanf("%d", &t1);
            int n[t1];
            for(int l = 0; l < t1; l++) scanf("%d", &n[l]);

            for(int j = 0; j < t1; j++){
                for(int c = j + 1; c < t1; c++){
                    if(n[j] > n[c]){
                        int temp = n[j];
                        n[j] = n[c];
                        n[c] = temp;
                    }
                }
            }
            printf("Case %d: %d\n", i, n[t1 - 1]);
        }
    }

    return 0;
}