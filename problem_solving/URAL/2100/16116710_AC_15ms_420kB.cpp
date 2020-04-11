#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int t, co = 2;
    string s;
    for(scanf("%d", &t), getline(cin, s); t--; ){
        getline(cin, s);
        if(s[s.size() - 4] == '+') co += 2;
        else co++;
    }
    if(co == 13) co++;
    printf("%d\n", co * 100);
    return 0;
}
