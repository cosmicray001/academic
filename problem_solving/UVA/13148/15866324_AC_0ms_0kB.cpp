#include <bits/stdc++.h>
using namespace std;
bool fnc(int a){
    int x = sqrt(a);
    if(x * x == a) return 1;
    int y = pow(a, 1/3.0);
    if(y * y * y == a) return 1;
    return 0;
}
int main(){
    int a;
    while(scanf("%d", &a) != EOF && a){
        printf("%s\n", fnc(a) ? "Special" : "Ordinary");
    }
    return 0;
}
