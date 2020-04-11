#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
double fnc(double a, double b, double c){
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  double l, w, h, ang, a, b;
  while(scanf("%lf %lf %lf %lf", &l, &w, &h, &ang) != EOF){
    ang *= (pi / 180);
    a = l * tan(ang);
    double ans;
    if(a <= h){
      b = a / sin(ang);
      ans = (l * w * h) - fnc(a, b, l) * w;
    }
    else{
      ang = (pi / 2) - ang;
      a = h * tan(ang);
      b = a / sin(ang);
      ans = fnc(h, a, b) * w;
    }
    printf("%.3lf mL\n", ans);
  }
  return 0;
}
