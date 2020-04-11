#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int co = 0;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') co++;
    }
    if(co >= (s.size() + 1) / 2) for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
        printf("%c", s[i]);
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}
