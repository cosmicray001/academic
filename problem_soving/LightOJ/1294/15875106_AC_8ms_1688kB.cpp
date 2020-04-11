#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, co = 0;
    long long int a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%lld %lld", &a, &b);
        printf("Case %d: %lld\n", ++co, (a >> 1) * b);
    }
    return 0;
}
