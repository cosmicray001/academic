#include <bits/stdc++.h>
#define le 105
using namespace std;
int n[le];
int m[le];

bool fnc(int key, int ct, int len, int x){
    int i = ct - x, f = ct + x;
    if(i < 0) i = 0;
    if(f >= len) f = len - 1;
    for(int c = i; c <= f; c++){
        if(key == m[c]) return 1;
    }
    return 0;
}

int main(){
    int len, x;
    scanf("%d %d", &len, &x);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    for(int i = 0; i < len; scanf("%d", &m[i]), i++);
    bool f = false;
    for(int i = 0; i < len; i++){
        if(fnc(n[i], i, len, x)){
            if(f) printf(" ");
            f = true;
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    return 0;
}
