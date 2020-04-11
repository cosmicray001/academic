#include <bits/stdc++.h>
#define le 5000006
#define ll unsigned long long int
using namespace std;
ll n[le];
bool m[le];
void fi(){
    for(int i = 1; i < le; n[i] = i, i++);
    n[1] = 1;
    m[1] = 1;
    for(int i = 2; i < le; i++){
        if(!m[i]){
            for(int j = i; j < le; j += i){
                m[j] = 1;
                n[j] = n[j] * (i - 1) / i;
            }
        }
    }
    for(int i = 2; i < le; i++) n[i] = n[i] * n[i] + n[i - 1];
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fi();
    int t, co = 0, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        printf("Case %d: %llu\n", ++co, n[b] - n[a - 1]);
    }
    return 0;
}
