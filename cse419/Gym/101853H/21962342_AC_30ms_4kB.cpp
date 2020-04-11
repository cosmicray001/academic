#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    ll a;
    for(scanf("%d", &t); t--; ){
        scanf("%lld", &a);
        a /= 6;
        printf("%lld\n", (ll)sqrt(a));
    }
    return 0;
}
