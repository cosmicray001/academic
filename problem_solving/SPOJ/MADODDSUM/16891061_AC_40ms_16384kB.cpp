#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a & 1) a += 2;
    else a++;
    long long sum = 0;
    for(int i = a; i <= b; sum += i, i += 2);
    printf("%lld\n", sum);
    return 0;
}