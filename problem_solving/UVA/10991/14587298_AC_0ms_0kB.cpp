#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
double fnc(double a, double b, double c){
  double s = (a + b + c) / 2.0;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}
double fnc1(double a, double b, double c, double len){
  double ang = acos((b * b + c * c - a * a) / (2 * b * c));
  ang = ang * 180 / pi;
  return (pi * len * len * ang) / 360;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t;
  double r1, r2, r3, a, b, c;
  for(scanf("%d", &t); t--; ){
    scanf("%lf %lf %lf", &r1, &r2, &r3);
    a = r1 + r2;
    b = r2 + r3;
    c = r3 + r1;
    double area = fnc(a, b, c);
    double ar = fnc1(b, c, a, r1);
    ar += fnc1(c, a, b, r2);
    ar += fnc1(a, b, c, r3);
    printf("%.6lf\n", area - ar);
  }
  return 0;
}
