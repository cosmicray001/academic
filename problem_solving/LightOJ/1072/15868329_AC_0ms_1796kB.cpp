#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main(){
  int t, co = 0, n;
  double R, r;
  for(scanf("%d", &t); t--; ){
    scanf("%lf %d", &R, &n);
    printf("Case %d: %.10lf\n", ++co, ((R * sin(pi / n)) / (1 + sin(pi / n))));
  }
  return 0;
}
