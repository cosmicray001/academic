#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, co = 0, n, a, sum = 0;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    sum = 0;
    while(n--){
      scanf("%d", &a);
      if(a > 0) sum += a;
    }
    printf("Case %d: %d\n", ++co, sum);
  }
  
  return 0;
}