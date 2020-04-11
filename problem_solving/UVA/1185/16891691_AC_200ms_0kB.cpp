#include <bits/stdc++.h>
#define le 10000007
using namespace std;
double n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    n[0] = 0.0;
    for(int i = 1; i < le; n[i] = n[i - 1] + log10(i * 1.0), i++);
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%d\n", (int)n[a] + 1);
    }
    return 0;
}