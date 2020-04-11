#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll k;
int fnc(int n){
    if(n == 1) return 1;
    return (fnc(n - 1) + k - 1) % n + 1;
}

int main(){
    int t, co = 0, n;
    for(scanf("%d", &t); t--; ){
        scanf("%d %lld", &n, &k);
        printf("Case %d: %d\n", ++co, fnc(n));
    }
    return 0;
}
