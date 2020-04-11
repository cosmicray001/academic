#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a = 0, b = 0, c = 0, x, y, z;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d", &x, &y, &z);
        a += x;
        b += y;
        c += z;
    }
    bool f = false;
    if(a == 0 && b == 0 && c == 0) f = 1;
    printf("%s\n", f ? "YES" : "NO");
    return 0;
}
