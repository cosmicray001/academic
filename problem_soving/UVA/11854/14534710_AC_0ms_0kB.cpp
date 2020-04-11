#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool fnc(ll a, ll b, ll c){
    if((a * a) == (b * b) + (c * c)) return 1;
    return 0;
}
int main(){
    ll a, b, c;
    while(scanf("%lld %lld %lld", &a, &b, &c) != EOF && (a && b && c)){
        ll x = max(a, max(b, c));
        ll y = min(a, min(b, c));
        ll z = (a + b + c) - (x + y);
        printf("%s\n", fnc(x, y, z) ? "right" : "wrong");
    }
    return 0;
}
