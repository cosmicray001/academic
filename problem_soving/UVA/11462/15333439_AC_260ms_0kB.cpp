#include <bits/stdc++.h>
#define le 2000006
using namespace std;
int n[le];
int main(){
    int len;
    while(scanf("%d", &len) != EOF && len){
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        sort(n, n + len);
        for(int i = 0; i < len - 1; printf("%d ", n[i]), i++);
        printf("%d\n", n[len - 1]);
    }
    return 0;
}
