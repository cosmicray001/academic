#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int n[le >> 6];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
}
bool fnc(int a){
    int t = 0, temp = a;
    for(; a > 0; a /= 10) t = t * 10 + a % 10;
    return (((t % 2 != 0 && t != 1 && !ck(t)) || t == 2) && temp != t);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    int a;
    while(scanf("%d", &a) != EOF){
        if((a % 2 != 0 && a != 1 && !ck(a)) || a == 2) printf("%d %s\n", a, fnc(a) ? "is emirp." : "is prime.");
        else printf("%d is not prime.\n", a);
    }
    return 0;
}