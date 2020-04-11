#include <bits/stdc++.h>
using namespace std;
int main(){
  string s, a;
  int t, len;
  for(scanf("%d", &t); t--; ){
    cin >> s;
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
      cin >> a;
      bool f = true;
      if(a.size() > s.size()) f = false;
      for(int j = 0; j < a.size() && f; j++) if(s[j] != a[j]) f = false;
      printf("%s\n", f ? "y" : "n");
    }
  }
  return 0;
}
