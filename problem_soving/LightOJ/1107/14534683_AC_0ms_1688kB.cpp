#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, co = 0, x, y, x1, y1, ti, a, b;
    for(scanf("%d", &t); t--; ){
        printf("Case %d:\n", ++co);
        scanf("%d %d %d %d %d", &x, &y, &x1, &y1, &ti);
        while(ti--){
            scanf("%d %d", &a, &b);
            if((a > x && a < x1) && (b > y && b < y1)) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
