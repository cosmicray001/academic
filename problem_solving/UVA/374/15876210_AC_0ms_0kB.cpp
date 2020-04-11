#include <bits/stdc++.h>
using namespace std;
int m;
int fnc(int b, int p){
    if(p == 0) return 1 % m;
    if(p & 1) return ((b % m) * (fnc(b, p - 1) % m)) % m;
    else{
        int x = fnc(b, p / 2);
        return ((x % m) * (x % m)) % m;
    }
}
int main(){
    int b, p;
    while(scanf("%d %d %d", &b, &p, &m) != EOF){
        printf("%d\n", fnc(b, p));
    }
    return 0;
}
