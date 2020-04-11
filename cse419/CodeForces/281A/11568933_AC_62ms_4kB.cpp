#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int len = s.size();
  bool f = 0;
  if(s[0] >= 'a' && s[0] <= 'z') f = 1;
  printf("%c", f ? ((s[0] - 'a') + 'A') : s[0]);
  for(int i = 1; i < len; i++) printf("%c", s[i]);
  printf("\n");
  
  return 0;
}