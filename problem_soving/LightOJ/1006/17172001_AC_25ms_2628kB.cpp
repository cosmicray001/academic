#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le], g, b, c, d, e, f;
int fnc(int a){
    if(a == 0) return g % 10000007;
    if(a == 1) return b % 10000007;
    if(a == 2) return c % 10000007;
    if(a == 3) return d % 10000007;
    if(a == 4) return e % 10000007;
    if(a == 5) return f % 10000007;
    if(n[a] == 0) n[a] = (fnc(a - 1) % 10000007 + fnc(a - 2) % 10000007 + fnc(a - 3) % 10000007 + fnc(a - 4) % 10000007 + fnc(a - 5) % 10000007 + fnc(a - 6) % 10000007) % 10000007;
    return n[a];
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d %d %d %d %d", &g, &b, &c, &d, &e, &f, &a);
        for(int i = 0; i <= a; n[i] = 0, i++);
        printf("Case %d: %d\n", ++co, fnc(a) % 10000007);
    }
    return 0;
}