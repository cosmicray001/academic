#include <bits/stdc++.h>
using namespace std;
int main(){
  int a;
  double b, sum = 0;
  cin >> a >> b;
  if(a % 5 == 0 && a + 0.5 < b) printf("%.2lf\n", b - a - 0.5);
  else printf("%.2lf\n", b);
  return 0;
}
