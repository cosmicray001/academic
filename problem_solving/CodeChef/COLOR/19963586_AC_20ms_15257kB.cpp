#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, len;
  string s;
  for(scanf("%d", &t); t--; ){
    cin >> len >> s;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == 'R') a++;
      else if(s[i] == 'G') b++;
      else c++;
    }
    int m = max(a, max(b, c));
    a = (a + b + c) - m;
    cout << a << endl;
  }
  return 0;
}
