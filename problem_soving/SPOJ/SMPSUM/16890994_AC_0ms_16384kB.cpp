#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a, b, sum = 0, i;
    scanf("%lld %lld", &a, &b);
    for(i = a; i <= b; i++) sum += (i * i);
    printf("%lld\n", sum);
    return 0;
}