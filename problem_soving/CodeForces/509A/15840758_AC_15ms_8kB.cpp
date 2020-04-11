#include <bits/stdc++.h>
using namespace std;
#define ll long long int
long long int ok(long long int a){
    ll mul = 1;
    for(ll i = 2; i <= a; mul *= i, i++);
    return mul;
}
ll fnc(ll a, ll b){
    return ok(a) / (ok(b) * ok(a - b));
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", fnc(2 * n - 2, n - 1));
    return 0;
}
