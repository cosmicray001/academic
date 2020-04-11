#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n[25], a;
void fnc(){
    n[0] = 1;
    for(int i = 1; i < 21; i++) n[i] = n[i - 1] * i;
}
int main(){
    int t, co = 0;
    fnc();
    for(scanf("%d", &t); t--; ){
        scanf("%lld", &a);
        vector<int> v;
        for(int i = 20; i >= 0 && a > 0; i--){
            if(a >= n[i]){
                a -= n[i];
                v.push_back(i);
            }
        }
        printf("Case %d: ", ++co);
        if(a != 0) printf("impossible\n");
        else{
            for(int i = v.size() - 1; i >= 0; i--){
                printf("%d!", v[i]);
                if(i) printf("+");
            }
            printf("\n");
        }
    }
    return 0;
}