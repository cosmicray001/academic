#include <bits/stdc++.h>
using namespace std;
vector<char> v;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s;
    while(getline(cin, s)){
        if(!s.compare("DONE")) break;
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] >= 'A' && s[i] <= 'Z') v.push_back(s[i] - 'A' + 'a');
                else if(s[i] >= 'a' && s[i] <= 'z') v.push_back(s[i]);
            }
            bool f = 1;
            for(int i = 0, j = v.size() - 1; i < v.size() / 2; i++, j--){
                if(v[i] != v[j]){
                    f = 0;
                    break;
                }
            }
            printf("%s\n", f ? "You won't be eaten!" : "Uh oh..");
        }
        v.clear();
    }
    return 0;
}