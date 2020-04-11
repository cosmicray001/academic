#include <bits/stdc++.h>
#define le 1000006
#define ll long long int
using namespace std;
ll n[le];
map<ll, bool> mp;
int main(){
    //freopen("input.txt", "r", stdin);
    int len, len1;
    while(scanf("%d %d", &len, &len1) != EOF && (len || len1)){
        ll a;
        mp.clear();
        for(int i = 0; i < len; i++){
            scanf("%lld", &a);
            mp[a] = true;
        }
        int ans = 0;
        while(len1--){
            scanf("%lld", &a);
            if(mp[a]) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
