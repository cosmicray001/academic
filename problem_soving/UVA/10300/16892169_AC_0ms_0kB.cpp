#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int t, t1;
    ll a, b, c;
    for(scanf("%d", &t); t--; ){
        ll sum = 0;
        for(scanf("%d", &t1); t1--; ){
            scanf("%lld %lld %lld", &a, &b, &c);
            sum += a * c;
        }
        printf("%lld\n", sum);
    }
    return 0;
}