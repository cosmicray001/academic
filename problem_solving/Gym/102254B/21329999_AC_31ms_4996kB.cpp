#include <bits/stdc++.h>
#define le 1003
using namespace std;
bool vis[le][le];
int dp[le][le];
string a, b;
int fnc(int i, int j){
  if(i == a.size() || j == b.size()) return 0;
  if(vis[i][j]) return dp[i][j];
  int ans = 0;


  if(a[i] == b[j]) ans = 1 + fnc(i + 1, j + 1);
  else ans = max(fnc(i + 1, j), fnc(i, j + 1));
  dp[i][j] = ans;
  vis[i][j] = true;
  return dp[i][j];
}
int main(){
  cin >> a >> b;
  printf("%d\n", fnc(0, 0));
  return 0;
}