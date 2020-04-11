#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool fnc(ll a){
    int c = 0;
    for(; a > 0; a /= 2) if(a % 2 == 1) c++;
    return (c & 1);
}
int main(){
    int t, co = 0;
    ll a;
    for(scanf("%d", &t); t--; ){
        scanf("%lld", &a);
        printf("Case %d: %s\n", ++co, fnc(a) ? "odd" : "even");
    }
    return 0;
}
