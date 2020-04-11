#include <bits/stdc++.h>
using namespace std;
bool fnc(int a){
    int re = 0, t = a;
    for(; t > 0; t /= 10) re = re * 10 + t % 10;
    if(re == a) return 1;
    return 0;
}
int main(){
    int t, co = 0, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("Case %d: %s\n", ++co, fnc(a) ? "Yes" : "No");
    }
    return 0;
}
