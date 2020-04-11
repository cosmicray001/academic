#include <bits/stdc++.h>

using namespace std;

double are(double a, double b, double c){
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

double fnc1(double ab, double ac, double bc, double ad){
  double are1 = are(ab, ac, bc);
  double ae = (ad * ac) / ab;
  double de = (ad * bc) / ab;
  double are2 = are(ad, ae, de);
  are1 -= are2;
  return (are2 / are1);
}

double fnc(double ab, double ac, double bc, double rto){
  double hi = ab, lo = 0, mid, ad;
  int t = 100;
  while(t--){
    mid = (lo + hi) / 2;
    ad = mid;
    if(rto < fnc1(ab, ac, bc, ad)) hi = mid;
    else lo = mid;
  }
  return ad;
}

int main()
{
  int t, co = 0;
  double ab, ac, bc, rto;
  scanf("%d", &t);
  while(t--){
    scanf("%lf %lf %lf %lf", &ab, &ac, &bc, &rto);
    double re = fnc(ab, ac, bc, rto);
    printf("Case %d: %.10lf\n", ++co, re);
  }
  
  return 0;
}