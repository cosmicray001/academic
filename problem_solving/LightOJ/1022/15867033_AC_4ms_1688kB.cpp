#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main(){
  int t, co = 0;
  double r;
  for(scanf("%d", &t); t--; ){
    scanf("%lf", &r);
    printf("Case %d: %.2lf\n", ++co, 4 * r * r - (pi * r * r));
  }
  return 0;
}
