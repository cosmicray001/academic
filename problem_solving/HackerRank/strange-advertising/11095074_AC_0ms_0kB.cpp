#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  int c = 0, got = 5;
  while(t--){
    got /= 2;
    c += got;
    got *= 3;
  }
  printf("%d\n", c);
  
  return 0;
}