#include <bits/stdc++.h>

using namespace std;
int n[150];

int main()
{
  string s, ch;
  int t;
  getline(cin, s);
  int len = s.size();
  for(int i = 0; i < len; i++) n[s[i]] = 1;
  scanf("%d", &t);
  getline(cin, s);
  while(t--){
    bool f = 1;
    getline(cin, ch);
    int le = ch.size();
    for(int i = 0; i < le; i++){
      if(n[ch[i]] != 1){
        f = 0;
        break;
      }
    }
    printf("%s\n", f ? "Yes" : "No");
  }
  
  return 0;
}