#include <bits/stdc++.h>
using namespace std;
set<string> st;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
int t, co = 0;  
string s, a;
  while(cin >> s){
    a = "";
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
      if(s[i] >= 'a' && s[i] <= 'z') a += s[i];
      else if(!(s[i] >= 'a' && s[i] <= 'z') && a != ""){
        st.insert(a);
        a = "";
      }
    }
    if(a != "") st.insert(a);
  }
  for(set<string> :: iterator it = st.begin(); it != st.end(); it++) cout << (*it) << endl;
  
return 0;
}