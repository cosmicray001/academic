#include <bits/stdc++.h>
#define le 1003
using namespace std;
char n[le][le], m[le][le];
void fnc_r(int r){
  for(int j = 0; j < r; j++){
    for(int i = r - 1; i >= 0; i--){
      char ch = n[i][j];
      if(ch == '>') ch = 'v';
      else if(ch == '<') ch = '^';
      else if(ch == 'v') ch = '<';
      else if(ch == '^') ch = '>';
      printf("%c", ch);
    }
    printf("\n");
  }
}
void fnc_l(int r){
  for(int j = r - 1; j >= 0; j--){
    for(int i = 0; i < r; i++){
      char ch = n[i][j];
      if(ch == '>') ch = '^';
      else if(ch == '<') ch = 'v';
      else if(ch == 'v') ch = '>';
      else if(ch == '^') ch = '<';
      printf("%c", ch);
    }
    printf("\n");
  }
}
void fnc_down(int r){
  for(int i = r - 1; i >= 0; i--){
    for(int j = r - 1; j >= 0; j--){
      char ch = n[i][j];
      if(ch == '>') ch = '<';
      else if(ch == '<') ch = '>';
      else if(ch == 'v') ch = '^';
      else if(ch == '^') ch = 'v';
      printf("%c", ch);
    }
    printf("\n");
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int len;
  string s, ss;
  scanf("%d", &len);
  cin >> ss;
  for(int i = 0; i < len; i++){
    cin >> s;
    for(int j = 0; j < len; j++){
      n[i][j] = s[j];
    }
  }
  int ve = 3;
  for(int i = 0; i < ss.size(); i++){
    if(ss[i] == 'R') ve = (ve + 1) % 4;
    else ve = (ve + 4 - 1) % 4;
  }
  //cout << ve << endl;
  if(ve == 0) fnc_r(len);
  else if(ve == 1) fnc_down(len);
  else if(ve == 2) fnc_l(len);
  else{
    for(int i = 0; i < len; i++){
      for(int j = 0; j < len; j++) printf("%c", n[i][j]);
      printf("\n");
    }
  }
  return 0;
}