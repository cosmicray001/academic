#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, len, x, y, x1, y1, a, b, co = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d %d", &x, &y, &x1, &y1);
        printf("Case %d:\n", ++co);
        scanf("%d", &len);
        while(len--){
            scanf("%d %d", &a, &b);
            bool f = false;
            if((a > x && a < x1) && (b > y && b < y1)) f = true;
            printf("%s\n", f ? "Yes" : "No");
        }
    }
}
