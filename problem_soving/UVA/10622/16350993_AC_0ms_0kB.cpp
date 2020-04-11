#include <bits/stdc++.h>
#define le 1000006
//46350
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int fnc(long long int a){
    bool f = false;
    if(a < 0){
        f = true;
        a *= -1;
    }
    int ans = 0;
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            int x = 0;
            while(a % v[i] == 0){
                x++;
                a /= v[i];
            }
            ans = __gcd(ans, x);
        }
    }
    if(!ans) ans = 1;
    if(f && ans % 2 == 0) while(ans % 2 == 0) ans /= 2;
    return ans;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    long long int a;
    while(scanf("%lld", &a) != EOF && a) printf("%d\n", fnc(a));
    return 0;
}
