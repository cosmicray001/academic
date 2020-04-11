#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, k;
  string s;
  while(scanf("%d %d", &len, &k) != EOF && (len || k)){
    cin >> s;
    string a = "";
    int idx = 0, co = 0;
    for(int i = 0; i < len - k; i++){
      int mx = -INT_MAX;
      for(int j = idx; j < s.size() && len - j >= len - k - co; j++){
        if(mx < s[j] - '0'){
          mx = s[j] - '0';
          idx = j;
        }
      }
      cout << s[idx++];
      co++;
    }
    printf("\n");
  }
  return 0;
}
