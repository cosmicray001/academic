#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t, co = 0;
    ll a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%lld %lld", &a, &b);
        printf("Case %d: %lld\n", ++co, (a >> 1) * b);
    }
    return 0;
}
