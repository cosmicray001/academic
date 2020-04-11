#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        int g = __gcd(a, b);
        printf("%d %d\n", b / g, a / g);
    }
    return 0;
}