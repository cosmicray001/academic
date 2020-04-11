#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n[16];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    n[7] = 5040;
    for(int i = 8; i < 14; n[i] = n[i - 1] * i, i++);
    int a;
    while(scanf("%d", &a) != EOF){
        if(a < 1){
            if(a & 1) printf("Overflow!\n");
            else printf("Underflow!\n");
        }
        else if(a < 8) printf("Underflow!\n");
        else if(a > 13) printf("Overflow!\n");
        else printf("%lld\n", n[a]);
    }
    return 0;
}