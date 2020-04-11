#include <bits/stdc++.h>
#define ll long long
using namespace std;
int m = 10;
int fnc(int b, int p){
    if(!p) return 1;
    if(p % 2 == 0){
        int re = fnc(b, p / 2);
        return ((re % m) * (re % m)) % m;
    }
    return ((b % m) * (fnc(b, p - 1) % m)) % m;
}
int main(){
    int b, p, t;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &b, &p);
        printf("%d\n", fnc(b, p));
    }
    return 0;
}