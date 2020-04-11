#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, a, b, x, y;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d %d", &a, &b, &x, &y);
        if((a + b) % 2 != (x + y) % 2) printf("Case %d: impossible\n", ++co);
        else if(abs(a - x) == abs(b - y)) printf("Case %d: 1\n", ++co);
        else printf("Case %d: 2\n", ++co);
    }
    return 0;
}
