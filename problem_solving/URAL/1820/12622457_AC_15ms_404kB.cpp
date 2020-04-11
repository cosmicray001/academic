#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  if(b >= a) printf("2\n");
  else{
    a = a << 1;
    b = (a + b - 1) / b;
    printf("%d\n", b);
  }
  
  return 0;
}