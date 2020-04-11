#include <bits/stdc++.h>

using namespace std;
int ve = 10000000;

int main()
{
  int a, b, c;
  scanf("%d %d", &a, &b);
  while(a--){
    scanf("%d", &c);
    ve = min(ve, c);
  }
  b = b - ve;
  if(b < 0) b = 0;
  printf("%d\n", b);
  
  return 0;
}