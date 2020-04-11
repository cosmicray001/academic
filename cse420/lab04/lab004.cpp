#include <bits/stdc++.h>
using namespace std;
vector<string> v;
string key_main[] = {"asm", "cout", "cin", "else", "new", "this", "auto", "enum", "operator", "throw", "bool", "explicit", "private", "printf", "true", "break", "export", "protected", "try", "case", "extern", "public", "typedef", "catch", "false", "register", "typeid", "char", "float", "reinterpret_cast", "scanf", "typename", "class", "for", "return", "union", "const", "friend", "short", "unsigned", "const_cast", "goto", "signed", "using", "continue", "if", "sizeof", "virtual", "default", "inline", "static", "void", "delete", "int", "static_cast", "volatile", "do", "long", "struct", "wchar_t", "double", "mutable", "switch", "while", "dynamic_cast", "namespace", "template"};
bool fnc_key(string a){
  for(int i = 0; i < 63; i++) if(a.compare(key_main[i]) == 0) return true;
  return 0;
}
void fnc(string s, int a, int b){
  int lo = 0;
  string s1 = "", s2;
  bool f = false;
  for(int i = a - 1; i >= 0; i--){
    if(s[i] != ' '){
      s1 += s[i];
      f = true;
      lo = i;
    }
    else if(s[i] == ' ' && f) break;
  }
  for(int i = 0, j = s1.size() - 1; i < (s1.size() - 1) / 2; i++, j--) swap(s1[i], s1[j]);
  stringstream ss(s);
  ss >> s2;
  if(!fnc_key(s1) && (s2 == "public" || s2 == "private")){
    s1 = "";
    for(int i = lo; i < b + 1; s1 += s[i], i++);
    s2 = "";
    f = false;
    for(int i = lo - 1; i >= 0; i--){
      if(s[i] != ' '){
        s2 += s[i];
        f = true;
      }
      else if(s[i] == ' ' && f) break;
    }
    for(int i = 0, j = s2.size() - 1; i < (s2.size() - 1) / 2; i++, j--) swap(s2[i], s2[j]);
    cout << "Methods: " << s1 << ",  return type: " << s2 << endl;
  }
}
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  string s;
  while(getline(cin, s)){
    stack<pair<char, int> > st;
    int idx1, idx2;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == '(') st.push(make_pair('(', i));
      else if(s[i] == ')'){
        if(st.size() == 1){
          pair<char, int> p = st.top();
          st.pop();
          fnc(s, p.second, i);
        }
        else if(st.size() > 1) st.pop();
      }
    }
  }
  return 0;
}
