#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  map<string, int> mp;
  int co = 1;
  for(int i = 'a'; i <= 'z'; i++){
    string s = "";
    s += (char)i;
    mp[s] = co++;
  }
  for(int i = 'a'; i <= 'z' - 1; i++){
    for(int j = i + 1; j <= 'z'; j++){
      string s = "";
      s += (char)i;
      s += (char)j;
      mp[s] = co++;
    }
  }
  for(int i = 'a'; i <= 'z' - 2; i++){
    for(int j = i + 1; j <= 'z' - 1; j++){
      for(int k = j + 1; k <= 'z'; k++){
        string s = "";
        s += (char)i;
        s += (char)j;
        s += (char)k;
        mp[s] = co++;
      }
    }
  }
  for(int _ = 'a'; _ <= 'z' - 3; _++){
    for(int i = _ + 1; i <= 'z' - 2; i++){
      for(int j = i + 1; j <= 'z' - 1; j++){
        for(int k = j + 1; k <= 'z'; k++){
          string s = "";
          s += (char)_;
          s += (char)i;
          s += (char)j;
          s += (char)k;
          mp[s] = co++;
        }
      }
    }
  }
  for(int __ = 'a'; __ <= 'z' - 4; __++){
    for(int _ = __ + 1; _ <= 'z' - 3; _++){
      for(int i = _ + 1; i <= 'z' - 2; i++){
        for(int j = i + 1; j <= 'z' - 1; j++){
          for(int k = j + 1; k <= 'z'; k++){
            string s = "";
            s += (char)__;
            s += (char)_;
            s += (char)i;
            s += (char)j;
            s += (char)k;
            mp[s] = co++;
          }
        }
      }
    }
  }
  string s;
  while(cin >> s) printf("%d\n", mp[s]);
  return 0;
}
