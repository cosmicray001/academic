#include <bits/stdc++.h>
#define le 105
using namespace std;
int n[le];
int m[le];
int main(){
    int len, len1;
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    scanf("%d", &len1);
    for(int i = 0; i < len1; scanf("%d", &m[i]), i++);
    int mlen = min(len, len1);
    bool f = false;
    for(int i = 0; i < mlen; i++){
        if(n[i] == m[i]){
            if(f) printf(" ");
            f = true;
            printf("%d", i + 1);
        }
    }
    printf("\n");
    return 0;
}