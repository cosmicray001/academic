#include <bits/stdc++.h>
 
using namespace std;
int fnc(int a){
    a /= 5;
    if(a == 0) return 0;
    return a + fnc(a);
}
int main(){
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%d\n", fnc(a));
    }
    return 0;
}