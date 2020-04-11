#include <bits/stdc++.h>
 
using namespace std;
bool fnc(int a, char c[]){
    if(a == 1) return 0;
    if(a == 2){
        if(c[0] == 'A') return 1;
        return 0;
    }
    return 1;
}
int main(){
    int t, co = 0, a;
    char ch[18];
    for(scanf("%d", &t); t--; ){
        scanf("%d %s", &a, ch);
        printf("Case %d: %s\n", ++co, fnc(a % 3, ch) ? "Alice" : "Bob");
    }
    return 0;
}