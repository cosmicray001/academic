#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, c = 0;
  scanf("%d", &a);
  for(int i = 1; i <= a; i++){
    if(__gcd(i, a) == 1) c++;
  }
  printf("%d\n", c);
  
  return 0;
}