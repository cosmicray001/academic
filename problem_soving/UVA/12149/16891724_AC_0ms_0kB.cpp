#include <bits/stdc++.h>
#define le 102
using namespace std;
int n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    n[1] = 1;
    for(int i = 2; i < le; n[i] = n[i - 1] + i * i, i++);
    int a;
    while(scanf("%d", &a) != EOF && a) printf("%d\n", n[a]);
    return 0;
}