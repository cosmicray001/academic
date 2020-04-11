#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  double a;
  scanf("%d", &t);
  while(t--){
    scanf("%lf", &a);
    a *= 2;
    a = sqrt(--a);
    if(a - (int)a >= .50) a = ceil(a);
    else a = floor(a);
    printf("%.0lf\n", a);
  }
  
  return 0;
}