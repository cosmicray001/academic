#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    ll a;
    for(scanf("%d", &t); t--; ){
        scanf("%lld", &a);
        ll d = a / 10;
        d = ((d * (d + 1)) / 2) * 10;
        cout << d << endl;
    }
    return 0;
}
