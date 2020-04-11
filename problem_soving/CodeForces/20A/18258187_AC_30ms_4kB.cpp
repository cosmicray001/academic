#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  vector<char> v;
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(v.size() == 0) v.push_back(s[i]);
    else if(v[v.size() - 1] == '/' && s[i] == '/') continue;
    else v.push_back(s[i]);
  }
  char ch = v[v.size() - 1];
  if(v.size() != 1){
    for(int i = 0; i < v.size() - 1; i++) cout << v[i];
    if(ch != '/') printf("%c", ch);
  }
  else{
    printf("%c", v[0]);
  }
  printf("\n");
  return 0;
}
