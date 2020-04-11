#include <bits/stdc++.h>
#define le 52
using namespace std;
char n[le][le], m[le][le];
bool vis[le][le];
void fnc(int a, int b, int r, int c){
  bool f = false;
  int x, y;
  for(int i = a + 1; i < r; i++){
    if(m[i][b] != '.'){
      x = b;
      y = i - 1;
      m[y][x] = 'o';
      return;
    }
  }
  m[r - 1][b] = 'o';
}
int main(){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; m[i][j] = '.', j++);
  int r, c;
  string s;
  scanf("%d %d", &r, &c);
  for(int i = 0; i < r; i++){
    cin >> s;
    for(int j = 0; j < c; j++){
      n[i][j] = s[j];
      if(s[j] == '#') m[i][j] = s[j];
    }
  }
  for(int i = r - 1; i >= 0; i--){
    for(int j = 0; j < c; j++){
      if(n[i][j] == 'o') fnc(i, j, r, c);
    }
  }
  
  
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      printf("%c", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
