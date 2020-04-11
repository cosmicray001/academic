#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, s1;
  getline(cin, s);
  getline(cin, s1);
  int len = s.size();
  for(int i = 0; i < len; i++){
    if(s[i] != s1[i]) printf("%d", 1);
    else printf("%d", 0);
  }
  printf("\n");
  
  return 0;
}