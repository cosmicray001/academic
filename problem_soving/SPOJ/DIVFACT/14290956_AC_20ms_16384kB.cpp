#include <bits/stdc++.h>
#define ll long long
#define le 50004
#define mod 1000000007
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
    long long sum = 1;
    for(int i = 0; i < v.size() && v[i] <= a; i++){
        int temp = a, x = 0, div = v[i];
        while(temp / div > 0){
            x += (temp / div);
            temp /= div;
        }
        x++;
        sum = ((sum % 1000000007) * (x % 1000000007)) % 1000000007;
    }
    return sum % 1000000007;
}
int main(){
    se();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        int sum = 1;
        if(a == 0 || a == 1) printf("1\n");
        else printf("%d\n", fnc(a));
    }
    return 0;
}
