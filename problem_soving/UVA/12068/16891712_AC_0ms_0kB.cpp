#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n[13];
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d %lld", &len, &n[0]);
        ll ans = n[0], sum = 0, x;
        for(int i = 1; i < len; scanf("%lld", &n[i]), ans = lcm(n[i], ans), i++);
        for(int i = 0; i < len; sum += (ans / n[i]), i++);
        ans *= len;
        x = __gcd(ans, sum);
        printf("Case %d: %lld/%lld\n", ++co, ans / x, sum / x);
    }
    return 0;
}