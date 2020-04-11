#include <bits/stdc++.h>
using namespace std;
int fnc(int a, int b){
    if(a > b) swap(a, b);
    if(a == 1) return b;
    if(a == 2){
        a = b % 4;
        if(a == 3) a = 1;
        return b + a;
    }
    return ceil(a * b / 2.0);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", ++co, fnc(a, b));
    }
    return 0;
}
