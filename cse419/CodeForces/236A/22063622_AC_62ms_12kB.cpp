#include <bits/stdc++.h>
#define le 200
using namespace std;
bool n[le];
int main(){
    string s;
    getline(cin, s);
    int co = 0;
    for(int i = 0; i < s.size(); i++){
        if(!n[s[i]]){
            co++;
            n[s[i]] = true;
        }
    }
    printf("%s\n", (co & 1) ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}