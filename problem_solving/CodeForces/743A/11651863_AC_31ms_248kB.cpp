#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  int len;
  scanf("%d", &len);
  int a, b;
  scanf("%d %d", &a, &b);
  getline(cin, s);
  getline(cin, s);
  
  if(s[a - 1] == s[b - 1]) printf("0\n");
  else printf("1\n");

  return 0;
}
