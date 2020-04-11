#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    string s;
    for(scanf("%d", &t), getline(cin, s); t--; ){
        getline(cin, s);
        int len = s.size();
        len = len >> 1;
        for(int i = 0; i < len; printf("%c", s[i]), i += 2);
        printf("\n");
    }
    return 0;
}