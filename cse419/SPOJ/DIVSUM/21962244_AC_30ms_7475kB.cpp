#include <bits/stdc++.h>
#define ll long long int
#define le 500005
using namespace std;
ll n[le];
int main(){
    for(int i = 1; i < le - 2; i++){
        for(int j = i; j < le - 2; j += i){
          n[j] += i;
        }
    }
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%lld\n", n[a] - a);
    }
    return 0;
}
