#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int fnc(int a){
    while(a != 0){
        int x = a % 2;
        a /= 2;
        v.push_back(x);
    }
    int num = 0, p = 1;
    for(int i = v.size() - 1; i >= 0; i--){
        num += v[i] * p;
        p *= 2;
    }
    return num;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        if(a & 1) printf("%d\n", a);
        else printf("%d\n", fnc(a));
        v.clear();
    }
    return 0;
}
