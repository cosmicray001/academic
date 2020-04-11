#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fnc(ll a){
    ll f = a;
    if(a % 2 == 0){
        f /= 2;
        while(a % 2 == 0) a /= 2;
    }
    for(ll i = 3; i * i <= a; i += 2){
        if(a % i == 0){
            while(a % i == 0) a /= i;
            f = (f * (i - 1)) / i;
        }
    }
    if(a > 1) f = (f * (a - 1)) / a;
    return f;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    scanf("%d", &t);
    ll a, n;
    while(t--){
        scanf("%lld %lld", &n, &a);
        if(__gcd(a, n) != 1) printf("-1\n");


        else printf("%lld\n", fnc(a));
    }
    return 0;
}