#include <bits/stdc++.h>
using namespace std;
double p, q, r, s, t, u;
double ok(double x){
  return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
double fnc(){
  double lo = 0.0, hi = 1.0, mid;
  int t = 1000;
  while(t--){
    mid = (lo + hi) / 2.0;
    if(ok(lo) * ok(mid) <= 0) hi = mid;
    else lo = mid;
  }
  return (lo + hi) / 2.0;
}
int main(){
  while(scanf("%lld %lld %lld %lld %lld %lld", &p, &q, &r, &s, &t, &u) != EOF){
    if(ok(0) * ok(1) > 0) printf("No solution\n");
    else printf("%.4lf\n", fnc());
  }
  return 0;
}
