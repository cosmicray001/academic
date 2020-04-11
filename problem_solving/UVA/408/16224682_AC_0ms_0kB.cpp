#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF) printf("%10d%10d    %s\n\n", a, b, (__gcd(a, b) == 1) ? "Good Choice" : "Bad Choice");
    return 0;
}
