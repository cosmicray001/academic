#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
    int sum = 0;
    for(; a > 0; a /= 10) sum = (sum * 10) + (a % 10);
    return sum;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int t, a, b, x;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        x = fnc(a) + fnc(b);
        printf("%d\n", fnc(x));
    }
    return 0;
}
