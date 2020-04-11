#include <bits/stdc++.h>
 
using namespace std;
 
int fnc(int n, int i){
    if(n == 0) return 0;
    return (n % 10 * pow(2, i)) + fnc(n / 10, i + 1);
}
 
int main(){
    int t, co = 0;
    int a, b, c, d;
    int w, x, y, z;
    for(scanf("%d", &t); t--; ){
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        scanf("%d.%d.%d.%d", &w, &x, &y, &z);
        bool f = false;
        if(a == fnc(w, 0) && b == fnc(x, 0) && c == fnc(y, 0) && d == fnc(z, 0)) f = true;
        if(f) printf("Case %d: Yes\n", ++co);
        else printf("Case %d: No\n", ++co);
    }
    return 0;
}