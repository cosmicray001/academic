/*--------------------------------[cse420::lab01::samiulislambracu@gmail.com]-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
string s;
string ck = "+-*/%=!<> ,;:(){}[]";
string key_main[] = {"asm", "cout", "cin", "else", "new", "this", "auto", "enum", "operator", "throw", "bool", "explicit", "private", "printf", "true", "break", "export", "protected", "try", "case", "extern", "public", "typedef", "catch", "false", "register", "typeid", "char", "float", "reinterpret_cast", "scanf", "typename", "class", "for", "return", "union", "const", "friend", "short", "unsigned", "const_cast", "goto", "signed", "using", "continue", "if", "sizeof", "virtual", "default", "inline", "static", "void", "delete", "int", "static_cast", "volatile", "do", "long", "struct", "wchar_t", "double", "mutable", "switch", "while", "dynamic_cast", "namespace", "template"};
string mat_main = "+-*/=%", log_main = "=<>!", val_main = ".0123456789", oth_main = ",;:(){}[]";
set<string> st_key, st_ide, st_mat, st_log, st_val, st_oth, st_idee;
string fnc_seg(int lo, int hi){
  string a = "";
  for(int i = lo; i < hi + 1; a += s[i], i++);
  return a;
}
bool fnc_ck(char ch){
  for(int i = 0; i < ck.size(); i++) if(ch == ck[i]) return 1;
  return 0;
}
bool fnc_mat(char ch){
  for(int i = 0; i < mat_main.size(); i++) if(ch == mat_main[i]) return 1;
  return 0;
}
bool fnc_log(char ch){
  for(int i = 0; i < log_main.size(); i++) if(ch == log_main[i]) return 1;
  return 0;
}
bool fnc_oth(char ch){
  for(int i = 0; i < oth_main.size(); i++) if(ch == oth_main[i]) return 1;
  return 0;
}
bool fnc_key(string a){
  for(int i = 0; i < 63; i++) if(a.compare(key_main[i]) == 0) return true;
  return 0;
}
bool fnc_val(string a){
  bool f = false;
  for(int i = 0; i < a.size(); i++){
    f = false;
    for(int j = 0; j < val_main.size(); j++){
      if(a[i] == val_main[j]){
        f = true;
        break;
      }
    }
  }
  return f;
}
bool fnc_ide(string a){
  for(int i = 1; i < val_main.size(); i++) if(a[0] == val_main[i]) return 0;
  for(int i = 0; i < a.size(); i++) if(fnc_ck(a[i])) return 0;
  string b = "@#^&?";
  for(int i = 0; i < a.size(); i++) for(int j = 0; j < b.size(); j++) if(a[i] == b[j]) return 0;
  return true;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  while(getline(cin, s)){
    if(!fnc_ck(s[s.size() - 1])) s += " ";
    for(int i = 0, hi = 0, lo = 0; i < s.size(); i = hi){
      if(!fnc_ck(s[i])) hi++;
      else if(fnc_ck(s[i]) && lo == hi){
        //----------------------------------------------------------------------------------------------------[01]
        if(fnc_log(s[i])){
          if(i + 1 < s.size() && ((s[i] == '=' || s[i] == '!' || s[i] == '<' || s[i] == '>') && s[i + 1] == '=')){
            string a = "";
            a = a + s[i] + s[i + 1];
            st_log.insert(a);
            hi++;
          }
          else{
            string a = "";
            a += s[i];
            if(s[i] == '=') st_mat.insert(a);
            else if(s[i] == '!') st_oth.insert(a);
            else st_log.insert(a);
          }
        }
        //----------------------------------------------------------------------------------------------------[02]
        else if(fnc_mat(s[i])){
          string a = "";
          a += s[i];
          st_mat.insert(a);
        }
        //----------------------------------------------------------------------------------------------------[03]
        else if(fnc_oth(s[i])){
          string a = "";
          a += s[i];
          st_oth.insert(a);
        }
        hi++;
        lo = hi;
      }
      else{
        string a = fnc_seg(lo, hi - 1);
        //----------------------------------------------------------------------------------------------------[04]
        if(fnc_key(a)) st_key.insert(a);
        //----------------------------------------------------------------------------------------------------[05]
        else if(fnc_val(a)) st_val.insert(a);
        //----------------------------------------------------------------------------------------------------[06]
        else if(fnc_ide(a)) st_ide.insert(a);
        //----------------------------------------------------------------------------------------------------[07]
        else if(!fnc_ide(a)) st_idee.insert(a);
        lo = hi;
      }
    }
  }
    printf("Keywords: ");
    int co = 0;
    for(set<string> :: iterator it = st_key.begin(); it != st_key.end(); it++){
      if(co++) printf(", ");
      cout << (*it);
    }
    co = 0;
    printf("\nIdentifiers: ");
    for(set<string> :: iterator it = st_ide.begin(); it != st_ide.end(); it++){
      if(co++) printf(", ");
      cout << (*it);
    }
    co = 0;
    printf("\nMath Operators: ");
    for(set<string> :: iterator it = st_mat.begin(); it != st_mat.end(); it++){
      if(co++) printf(", ");
      cout << (*it);
    }
    co = 0;
    printf("\nLogical Operators: ");
    for(set<string> :: iterator it = st_log.begin(); it != st_log.end(); it++){
      if(co++) printf(", ");
      cout << (*it);
    }
    co = 0;
    printf("\nNumerical Values: ");
    for(set<string> :: iterator it = st_val.begin(); it != st_val.end(); it++){
      if(co++) printf(", ");
      cout << (*it);
    }
    co = 0;
    printf("\nOthers: ");
    for(set<string> :: iterator it = st_oth.begin(); it != st_oth.end(); it++){
      if(co++) printf("  ");
      cout << (*it);
    }
    co = 0;
    printf("\nErrors: ");
    for(set<string> :: iterator it = st_idee.begin(); it != st_idee.end(); it++){
      if(co++) printf(", ");
      cout << (*it);
    }
    printf("\n");
    return 0;
}
