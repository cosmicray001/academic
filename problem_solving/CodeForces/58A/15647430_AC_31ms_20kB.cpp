#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch[] = {'h', 'e', 'l', 'l', 'o'};
    string s;
    getline(cin, s);
    int st = 0, c = 0;
    for(int i = 0; i < 5; i++){
        for(int j = st; j < s.size(); j++){
            if(ch[i] == s[j]){
                c++;
                st = j + 1;
                break;
            }
        }
    }
    if(c == 5) printf("YES\n");
    else printf("NO\n");
    return 0;
}
