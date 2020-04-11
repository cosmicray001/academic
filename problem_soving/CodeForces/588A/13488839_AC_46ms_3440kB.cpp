#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  t--;
  int a, b;
  scanf("%d %d", &a, &b);
  int sum  = a * b, ve = b;
  while(t--){
    scanf("%d %d", &a, &b);
    ve = min(ve, b);
    sum += a * ve;
  }
  printf("%d\n", sum);
  
  return 0;
}