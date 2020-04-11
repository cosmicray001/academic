#include <bits/stdc++.h>
#define le 1000006

using namespace std;
bool n[le >> 1];
int m[le];

bool ck(int x){
    int temp = x, c = 0, re;
    for(; temp > 0; temp /= 10){
        if(!(temp % 10)) return 0;
        c++;
    }
    for(c = c - 1; c > 0; c--){
        re = pow(10, c);
        x %= re;
        if((x & 1 && n[x >> 1]) || (x != 2 && !(x % 2)) || x == 1) return 0;
    }
    return 1;
}

void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i <= rt; i += 2){
        if(!n[i >> 1]) for(int j = i * i, k = i << 1; j < le; j += k) n[j >> 1] = 1;
    }
    m[2] = 1;
    for(int i = 3; i < le; i += 2){
        if(!n[i >> 1] && ck(i)) m[i] = 1;
    }
    for(int i = 2; i < le; i++) m[i] += m[i - 1];
}

int main(){
    se();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%d\n", m[a]);
    }
    return 0;
}
