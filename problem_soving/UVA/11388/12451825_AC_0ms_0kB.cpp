#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long a, b, x, y;
  int t;
  scanf("%d", &t);
  while(t--){
    scanf("%lld %lld", &a, &b);
    x = __gcd(a, b);
    y = (a * b) / x;
    if(x == a && y == b) printf("%lld %lld\n", a, b);
    else printf("-1\n");
  }
  
  return 0;
}