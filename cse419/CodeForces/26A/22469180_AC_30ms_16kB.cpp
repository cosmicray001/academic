#include <bits/stdc++.h>
#define le 3003
using namespace std;
int n[le >> 6];
vector <int> v;
vector<int> ans;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
bool fnc(int a){
    ans.clear();
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            while(a % v[i] == 0) a /= v[i];
            ans.push_back(v[i]);
        }
    }
    if(a != 1) ans.push_back(a);
    return (ans.size() == 2);
}
int main(){
    se();
    int a;
    scanf("%d", &a);
    int sum = 0;
    for(int i = 1; i < a + 1; i++){
        if(fnc(i)) sum++;
    }
    printf("%d\n", sum);
    return 0;
}

