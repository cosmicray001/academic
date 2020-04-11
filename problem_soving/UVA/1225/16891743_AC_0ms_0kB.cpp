#include <bits/stdc++.h>
using namespace std;
int n[12];
void fnc(int a){
    for(; a > 0; a /= 10) n[a % 10]++;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        memset(n, 0, sizeof(n));
        for(int i = 1; i <= a; i++) fnc(i);
        for(int i = 0; i < 9; printf("%d ", n[i]), i++);
        printf("%d\n", n[9]);
    }
    return 0;
}