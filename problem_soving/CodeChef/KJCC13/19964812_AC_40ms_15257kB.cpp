#include <bits/stdc++.h>
using namespace std;
bool fnc(int a){
  if(a == 0) return 1;
  for(; a > 0; a /= 10) if(a % 10 == 0) return 1;
  return 0;
}
int main(){
  int t, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    if(a > b) swap(a, b);
    int co = 0;
    for(int i = a; i < b + 1; i++) if(fnc(i)) co++;
    printf("%d/%d\n", co, (b - a + 1));
  }
  return 0;
}
