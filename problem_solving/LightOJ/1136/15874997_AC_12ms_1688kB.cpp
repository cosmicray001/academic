#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
    if(a % 3 != 2) return (a / 3 * 2);
    return (a / 3 * 2 + 1);
}
int main(){
    int t, co = 0, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", ++co, fnc(b) - fnc(a - 1));
    }
    return 0;
}
