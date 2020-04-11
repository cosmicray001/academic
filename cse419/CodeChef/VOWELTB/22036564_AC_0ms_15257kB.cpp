#include <bits/stdc++.h>
using namespace std;
bool fnc(char ch){
    string s = "AEIOU";
    bool f = false;
    for(int i = 0; i < s.size(); i++){
        if(ch == s[i]) return true;
    }
    return 0;
}
int main(){
    char ch;
    scanf("%c", &ch);
    printf("%s\n", (fnc(ch)) ? "Vowel" : "Consonant");
    return 0;
}
