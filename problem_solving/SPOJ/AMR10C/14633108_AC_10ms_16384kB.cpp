#include <bits/stdc++.h>
#define ll long long
#define le 1000006
using namespace std;
bool n[le >> 1];
vector<int> v;
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!n[i >> 1]) for(int j = i * i, k = i << 1; j < le; j += k) n[j >> 1] = 1;
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!n[i >> 1]) v.push_back(i);
}
int fnc(int a){
    int ret = 0;
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            int x = 0;
            while(a % v[i] == 0){
                a /= v[i];
                x++;
            }
            ret  = max(ret, x);
        }
    }
    if(a && ret) return ret;
    return 1;
}
int main(){
    se();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%d\n", fnc(a));
    }
    return 0;
}
