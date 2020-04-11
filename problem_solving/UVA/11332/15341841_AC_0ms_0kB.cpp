#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
  if(a < 10) return a;
  int sum = 0;
  for(; a > 0; a /= 10) sum += (a % 10);
  return fnc(sum);
}
int main(){
  int a;
  while(scanf("%d", &a) != EOF && a) printf("%d\n", fnc(a));
  return 0;
}
