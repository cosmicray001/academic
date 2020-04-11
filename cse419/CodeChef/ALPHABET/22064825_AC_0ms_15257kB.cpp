#include <bits/stdc++.h>
#define le 200
using namespace std;
bool ch[le];
bool fnc(string a){
  for(int i = 0; i < a.size(); i++) if(!ch[a[i]]) return false;
  return true;
}
int main(){
  string s, a;
  int t;
  cin >> s;
  for(int i = 0; i < s.size(); i++) ch[s[i]] = true;
  for(scanf("%d", &t); t--; ){
    cin >> a;
    printf("%s\n", fnc(a) ? "Yes" : "No");
  }
  return 0;
}
