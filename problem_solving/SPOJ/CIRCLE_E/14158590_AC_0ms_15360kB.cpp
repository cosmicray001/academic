#include <bits/stdc++.h>
#define le 110
using namespace std;
 
int main(){
  int t;
  double r, r1, r2;
  for(scanf("%d", &t); t--; ){
    scanf("%lf %lf %lf", &r, &r1, &r2);
    double x = r * r1 * r2;
    x /= (((r * r1) + (r1 * r2) + (r2 * r)) + (2 * (sqrt(x* (r + r1 + r2)))));
    printf("%.6lf\n", x);
  }
  return 0;
}