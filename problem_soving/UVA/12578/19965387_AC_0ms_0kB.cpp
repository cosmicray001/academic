#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main(){
  int t;
  double l;
  for(scanf("%d", &t); t--; ){
    cin >> l;
    double a = ((3.0 * l) / 5.0) * l;
    double c = (pi * l * l) / 25.0;
    printf("%.2lf %.2lf\n", c, a - c);
  }
  return 0;
}
