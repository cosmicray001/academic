#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n[102][102];
ll fnc(int a, int b){
    if(a == b) return 1;
    if(b == 1) return a;
    if(n[a][b] == 0){
        n[a][b] = fnc(a - 1, b) + fnc(a - 1, b - 1);
    }
    return n[a][b];
}
int main(){
    ll a, b;
    while(scanf("%lld %lld", &a, &b) != EOF && a && b) printf("%lld things taken %lld at a time is %lld exactly.\n", a, b, fnc(a, b));
    return 0;
}
