#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a;
    while(scanf("%d", &a) != EOF && a){
        int ans = a;
        vector<int> v;
        while(1){
            scanf("%d", &a);
            if(!a) break;
            v.push_back(abs(a - ans));
        }
        ans = v[0];
        for(int i = 1; i < v.size(); ans = __gcd(ans, v[i]), i++);
        printf("%d\n", ans);
    }
    return 0;
}