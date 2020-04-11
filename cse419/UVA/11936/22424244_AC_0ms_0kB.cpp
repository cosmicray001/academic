#include <bits/stdc++.h>
using namespace std;
int n[5];
int main(){
    int a, b, c, t;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d", &n[0], &n[1], &n[2]);
        sort(n, n + 3);
        printf("%s\n", (n[0] + n[1] > n[2]) ? "OK" : "Wrong!!");
    }
    return 0;
}
