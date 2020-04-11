#include <bits/stdc++.h>
#define le 31632
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
int fnc(int a){
    int sum = 1;
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            int p = 0;
            while(a % v[i] == 0){
                a /= v[i];
                p++;
            }
            p++;
            sum *= p;
        }
    }
    if(a != 1) sum *= 2;
    return sum;
}
int main(){
    se();
    int t, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        int ve = 0, num = 0;
        if(a > b) swap(a, b);
        for(int i = a; i <= b; i++){
            int x = fnc(i);
            if(x > ve){
                ve = x;
                num = i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, num, ve);
    }
    return 0;
}
