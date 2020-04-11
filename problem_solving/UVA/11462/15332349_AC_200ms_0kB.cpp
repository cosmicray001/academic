#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le];
int main(){
    int len, x;
    while(scanf("%d", &len) != EOF && len){
        for(int i = 0; i < 101; n[i] = 0, i++);
        for(int i = 0; i < len; scanf("%d", &x), n[x]++, i++);
        bool f = false;
        for(int i = 1; i < 101; i++){
            if(n[i]){
                for(int j = 0; j < n[i]; j++){
                    if(f) printf(" ");
                    printf("%d", i);
                    f = true;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
