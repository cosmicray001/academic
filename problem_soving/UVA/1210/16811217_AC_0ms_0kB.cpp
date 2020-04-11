#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le >> 6], m[le];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
    for(int i = 0; i < v.size(); i++){
        int sum = 0;
        for(int j = i; j < v.size(); j++){
            sum += v[j];
            if(sum > 10000) break;
            m[sum]++;
        }
    }
}
int main(){
    se();
    int a;
    while(scanf("%d", &a) != EOF && a) printf("%d\n", m[a]);
    return 0;
}
