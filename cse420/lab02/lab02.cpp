/*--------------------------------[cse420::lab02::samiulislambracu@gmail.com]-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
string web_st = "www.", la = ".com";
bool ck_web(string s){
  if(s.size() < 9) return 0;
  for(int i = 0; i < web_st.size(); i++) if(s[i] != web_st[i]) return false;
  for(int i = 4; i < s.size() - 4; i++){
    if(!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9')) return false;
  }
  for(int i = la.size() - 1, j = s.size() - 1; i >= 0; i--, j--) if(s[j] != la[i]) return false;
  return true;
}
bool ck_mail(string s){
  if(!(s[0] >= 'a' && s[0] <= 'z')) return false;
  bool f = true;
  int idx;
  for(int i = 1; i < s.size(); i++) if(s[i] == '@'){
    idx = i;
    break;
  }
  string a = "", b = "";
  for(int i = 1; i < idx; a += s[i], i++);
  for(int i = idx + 1; i < s.size() - 4; b += s[i], i++);
  for(int i = 0; i < a.size(); i++){
    if(!(a[i] >= 'a' && a[i] <= 'z') && !(a[i] >= '0' && a[i] <= '9') && a[i] != '_' && a[i] != '.') return false;
  }
  for(int i = 0; i < b.size(); i++) if(!(b[i] >= 'a' && b[i] <= 'z')) return false;
  for(int i = la.size() - 1, j = s.size() - 1; i >= 0; i--, j--) if(s[j] != la[i]) return false;
  return true;
}
int main(){
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0;
  string s;
  for(scanf("%d", &t), getchar(); t--; ){
    getline(cin, s);
    bool f = ck_web(s), f1 = false;
    if(!f) f1 = ck_mail(s);
    if(f) printf("Web, %d\n", ++co);
    else if(f1) printf("Email, %d\n", ++co);
    else printf("Neither, %d\n", ++co);
  }
  return 0;
}
