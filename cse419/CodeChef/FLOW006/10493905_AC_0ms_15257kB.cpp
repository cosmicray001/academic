#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    while(scanf("%d", &t) != EOF){
        
        for(int i = 0; i < t; i++){
            int n;
            scanf("%d", &n);
            int sum = 0;
            for(; n > 0; n /= 10){
              sum = sum + (n % 10);
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
