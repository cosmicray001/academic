#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string c = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string s;
    while(getline(cin, s)){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ') printf(" ");
            else{
                for(int j = 0; j < c.size(); j++){
                    if(s[i] == c[j]){
                        printf("%c", c[j - 1]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}