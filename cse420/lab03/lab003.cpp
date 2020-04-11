/*--------------------------------[cse420::lab03::samiulislambracu@gmail.com]------------------------*/
#include <bits/stdc++.h>
using namespace std;
vector<string> ch;
int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t;
  string s;
  for(scanf("%d", &t); t--; ){
    cin >> s;
    ch.push_back(s);
  }
  for(scanf("%d", &t); t--; ){
    cin >> s;
    bool fl = true;
    for(int i = 0; i < ch.size() && fl; i++){
      regex e(ch[i]);
      bool f = regex_match(s, e);
      if(f){
        printf("YES, %d\n", i + 1);
        fl = false;
      }
    }
    if(fl) printf("NO, 0\n");
  }
  return 0;
}
