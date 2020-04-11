#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int fnc(int a){
    v.push_back(1);
    v.push_back(a);
    for(int i = 2; i * i < a; i++){
        if(a % i == 0){
            v.push_back(i);
            v.push_back(a / i);
        }
    }
    int rt = sqrt(a);
    if(rt * rt == a) v.push_back(rt);
    if(a == 1){
        v.clear();
        v.push_back(1);
        //v.push_back(1);
    }
    int c = 0;
    for(int i = 0; i < v.size(); i++){
        for(int j = i; j < v.size(); j++) if(v[i] * (v[j] / __gcd(v[i], v[j])) == a) c++;
    }
    return c;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a;
    while(scanf("%d", &a) != EOF && a){
        printf("%d %d\n", a, fnc(a));
        v.clear();
    }
    return 0;
}