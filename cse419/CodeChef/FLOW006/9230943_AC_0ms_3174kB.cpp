#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0;
    while(scanf("%d", &t) != EOF){
        int n = 0, temp = 0;
        for(int i = 0; i < t; i++){
            scanf("%d", &n);
            temp = n;
            int sum = 0;
            for(; temp > 0; temp /= 10){
                int re = temp % 10;
                sum = sum + re;
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
