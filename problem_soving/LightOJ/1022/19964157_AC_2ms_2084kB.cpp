#include <bits/stdc++.h>
#define pi 2 * acos(0.0)
using namespace std;
int main(){
  int t, co = 0;
  double a, r;
  for(scanf("%d", &t); t--; ){
    scanf("%lf", &r);
    a = r * 4 * r;
    printf("Case %d: %.2lf\n", ++co, a - (pi * r * r));
  }
  return 0;
}
