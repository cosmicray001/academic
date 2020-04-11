#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  if(a & 1 && b & 1) printf("Odd\n");
  else printf("Even\n");
  
  return 0;
}