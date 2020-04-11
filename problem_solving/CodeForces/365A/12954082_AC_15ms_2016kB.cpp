#include <bits/stdc++.h>

using namespace std;
bool n[13];

bool fnc(int a, int temp){
  memset(n, 0, sizeof(n));
  for(; temp > 0; temp /= 10){
    n[temp % 10] = 1;
  }
  for(int i = 0; i <= a; i++){
    if(!n[i]) return 0;
  }
  return 1;
}

int main(){
  int m, a, b, ans = 0;
  scanf("%d %d", &m, &a);
  while(m--){
    scanf("%d", &b);
    if(fnc(a, b)) ans++;
  }
  printf("%d\n", ans);
  return 0;
}