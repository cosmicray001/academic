#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    while(scanf("%d", &t) != EOF){
        for(int i = 0; i < t; i++){
            int len, ti;
            scanf("%d %d", &len, &ti);

            for(int j = 0; j < ti; j++){
                int n = 0;
                for(int k = 1; k <= (2 * len) - 1; k++){
                    if(k < len){
                        int c = k, c1 = k;
                        while(c1--){
                            printf("%d", c);
                        }
                        printf("\n");
                    }
                    else if(k >= len){
                        int c = len - n;
                        int c1 = len - n;
                        while(c1 != 0){
                            printf("%d", c);
                            c1--;
                        }
                        n++;
                        printf("\n");
                    }
                }
                if(i != t - 1 || j != ti - 1) printf("\n");
            }
            //printf("\n");
        }
    }

    return 0;
}
