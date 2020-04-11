#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  string s;
  cin >> s;
  int a, len = s.size();
  if(s.size() == 1) a = s[0] - '0';
  else{
    a = s[len - 2] - '0';
    a = (a * 10) + (s[len - 1] - '0');
  }
  printf("%d\n", (a % 4 == 0) ? 4 : 0);
  return 0;
}
