#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  int n[5];
  n[0] = n[1] = n[2] = 0;
  string s;
  for(int i = 0; i < 3; i++){
    cin >> s;
    if(s[1] == '>') n[(int) s[0] - 'A']++;
    else n[(int) s[2] - 'A']++;
  }
  if(n[0] == n[1] || n[0] == n[2] || n[1] == n[2]) printf("Impossible\n");
  else{
    int x, y, z;
    for(int i = 0; i < 3; i++){
      if(n[i] == 0) z = i + 'A';
      if(n[i] == 1) y = i + 'A';
      if(n[i] == 2) x = i + 'A';
    }
    printf("%c%c%c", z, y, x);
  }
  return 0;
}
