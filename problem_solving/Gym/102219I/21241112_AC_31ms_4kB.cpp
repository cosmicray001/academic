#include <bits/stdc++.h>
using namespace std;
bool f;
void fnc(string s, int a){
  for(int i = a; i < s.size(); i++) if(s[i] != '.'){
    f = false;
    cout << s[i] << endl;
    return;
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  string a, b, c;
  cin >> a >> b >> c;
  f = true;
  for(int i = 0; i < a.size(); i++) if(a[i] == '=') fnc(a, i + 1);
  for(int i = 0; i < b.size(); i++) if(b[i] == '=') fnc(b, i + 1);
  for(int i = 0; i < c.size(); i++) if(c[i] == '=') fnc(c, i + 1);
  if(f) printf("You shall pass!!!\n");
  return 0;
}
