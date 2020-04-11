#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    string s;
    for(scanf("%d", &t), getline(cin, s); t--; ){
        getline(cin, s);
        int c = 0, c1 = 0, c2 = 0, sum = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i - 1] && s[i] == 'F') c2++;
            else if(s[i] == s[i - 1] && s[i] == 'M') c1++;
            else if((s[i] == 'F' && s[i - 1] == 'M') || (s[i] == 'M' && s[i - 1] == 'F')) c++;
        }
        if((c1 == c2 && c1) || (c > 1 && c1 == c2)) printf("LOOP\n");
        else printf("NO LOOP\n");
    }
    return 0;
}