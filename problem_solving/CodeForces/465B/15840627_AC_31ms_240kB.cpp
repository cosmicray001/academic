#include <bits/stdc++.h>
#define le 1003
using namespace std;
vector<int> v;
int main(){
    //freopen("input.txt", "r", stdin);
    int len, x, sum = 0, c = 0;
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &x), v.push_back(x), sum += x, i++);
    bool f = 1;
    for(int i = 0; i < len; i++){
        if(v[i] && f){
            c++;
            f = 0;
        }
        else if(!v[i]) f = 1;
    }
    if(c) printf("%d\n", sum + c - 1);
    else printf("%d\n", sum);
    return 0;
}
