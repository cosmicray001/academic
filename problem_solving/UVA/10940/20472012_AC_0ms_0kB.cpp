#include <bits/stdc++.h>
#define le 500005
using namespace std;
int n[le];
int fnc(int a){
  if(a <= 1) return 1;
  else if(n[a] == -1){
    if(a & 1) n[a] = (fnc((a + 1) / 2) - 1) * 2;
    else n[a] = fnc(a / 2) * 2;
  }
  return n[a];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  for(int i = 0; i < le; n[i] = -1, i++);
  int a;
  while(scanf("%d", &a) != EOF && a){
    printf("%d\n", fnc(a));
  }
  return 0;
}
