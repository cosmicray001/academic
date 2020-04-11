#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  int a, b;
  scanf("%d", &t);
  t--;
  scanf("%d %d", &a, &b);
  int min_ve = b, cost = a * b;
  while(t--){
    scanf("%d %d", &a, &b);
    min_ve = min(min_ve, b);
    cost += a * min_ve;
  }
  printf("%d\n", cost);
  
  return 0;
}