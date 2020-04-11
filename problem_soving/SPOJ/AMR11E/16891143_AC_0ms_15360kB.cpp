#include <bits/stdc++.h>
#define le 2700
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
    int sum = 0, i;
    for(i = 30; i < 2700; i++){
        int c = 0, temp = i;
        for(int j = 0; j < v.size() && v[j] <= temp; j++){
            if(temp % v[j] == 0){
                c++;
                temp /= v[j];
            }
            if(c == 3){
                sum++;
                break;
            }
        }
        if(sum == a) return i;
    }
    return i;
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