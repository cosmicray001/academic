#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int len;
    scanf("%d", &len);
    int n[len];

    for(int i = 0; i < len; i++){
        scanf("%d", &n[i]);
    }
    int can = 0;
    //bool a = true;

    so:
        {
            for(int i = 1; i < len; i++){
                for(int j = i + 1; j < len; j++){
                    if(n[i] < n[j]){
                        int temp = n[i];
                        n[i] = n[j];
                        n[j] = temp;
                    }
                }
            }
        }


    for(int i = 1; i < len; i++){
        if(n[0] <= n[i]){
            n[0]++;
            n[i]--;

            can += 1;
            goto so;
        }
    }
    printf("%d\n", can);

    return 0;
}
