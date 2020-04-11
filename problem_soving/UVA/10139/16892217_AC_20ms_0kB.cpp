#include <bits/stdc++.h>
#define le 100005
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
int fnc(int a, int x){
    int sum = 0;
    while(a / x){
        sum += a / x;
        a /= x;
    }
    return sum;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        if(!b) printf("0 divides %d!\n", a);
        else if(!a && b == 1) printf("1 divides 0!\n");
        else{
            int temp = b;
            bool f = true;
            for(int i = 0; i < v.size() && v[i] * v[i] <= b; i++){
                if(b % v[i] == 0){
                    int p = 0;
                    while(b % v[i] == 0){
                        b /= v[i];
                        p++;
                    }
                    int x = fnc(a, v[i]);
                    if(x < p){
                        f = false;
                        break;
                    }
                }
            }
            if(b != 1){
                int x = fnc(a, b);
                if(x < 1) f = false;
            }
            printf("%d %s %d!\n", temp, f ? "divides" : "does not divide", a);
        }
    }
    return 0;
}