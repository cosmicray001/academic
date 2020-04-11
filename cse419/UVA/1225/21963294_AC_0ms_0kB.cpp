#include <bits/stdc++.h>
#define le 12
using namespace std;
int n[le];
int main(){
    int t, a;
    for(scanf("%d", &t); t--; ){
        memset(n, 0, sizeof(n));
        scanf("%d", &a);
        for(int i = 1; i < a + 1; i++){
            int temp = i;
            for(; temp > 0; temp /= 10) n[temp % 10]++;
        }
        for(int i = 0; i < 10; i++){
            if(i != 0) printf(" ");
            printf("%d", n[i]);
        }
        printf("\n");
    }
    return 0;
}
