#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  bool c = 0;
  while(getline(cin, s)){
    int len = s.size();
    for(int i = 0; i < len; i++){
      if(!c && s[i] == '"'){
        printf("%s", "``");
        c = 1;
      }
      else if(c && s[i] == '"'){
        printf("%s", "''");
        c = 0;
      }
      else{
        printf("%c", s[i]);
      }
    }
    printf("\n");
  }
  
  return 0;
}