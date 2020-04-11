#include <bits/stdc++.h>
using namespace std;
int main(){
  int co = 0;
  string s;
  while(cin >> s){
    if(s[0] == '*') break;
    printf("Case %d: %s\n", ++co, (s[0] == 'H') ? "Hajj-e-Akbar" : "Hajj-e-Asghar");
  }
  return 0;
}
