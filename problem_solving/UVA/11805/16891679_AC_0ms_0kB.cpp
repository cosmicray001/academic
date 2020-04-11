#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, a, b, c;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: %d\n", ++co, ((b + c) % a == 0) ? a : (b + c) % a);
    }
    return 0;
}