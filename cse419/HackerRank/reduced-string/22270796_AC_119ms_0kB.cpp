#include <bits/stdc++.h>
using namespace std;
stack<char> st;
int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(st.empty()) st.push(s[i]);
    else{
      char ch = st.top();
      if(ch == s[i]) st.pop();
      else st.push(s[i]);
    }
  }
  if(st.empty()) printf("Empty String\n");
  else{
    string a = "";
    while(!st.empty()){
      a += st.top();
      st.pop();
    }
    for(int i = a.size() - 1; i >= 0; i--) cout << a[i];
    printf("\n");
  }
  return 0;
}
