#include <bits/stdc++.h>
using namespace std;
int main(){
  int len;
  double a;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%lf", &a), printf("%.0lf\n", sqrt(a)), i++);
  return 0;
}
