#include <bits/stdc++.h>
using namespace std;
map<string, bool> mp;
int main(){
    //freopen("input.txt", "r", stdin);
    int len;
    string s;
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
        cin >> s;
        if(mp[s] == false) printf("NO\n");
        else printf("YES\n");
        mp[s] = true;
    }
    return 0;
}
