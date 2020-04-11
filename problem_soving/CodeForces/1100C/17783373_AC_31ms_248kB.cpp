#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main(){
  double n, r;
  scanf("%lf %lf", &n, &r);
  double ang = (360.0 / (2 * n));
  ang *= (pi / 180.0);
  double ans = (r * sin(ang)) / (1 - sin(ang));
  printf("%.10lf\n", ans);
  return 0;
}
