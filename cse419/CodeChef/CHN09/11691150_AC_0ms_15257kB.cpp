#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  int t;
  scanf("%d", &t);
  getline(cin, s);
  while(t--){
    int x = 0, y = 0;
    getline(cin, s);
    int len = s.size();
    for(int i = 0; i < len; i++){
      if(s[i] == 'a') x++;
      else y++;
    }
    printf("%d\n", x < y ? x : y);
  }
  
  return 0;
}