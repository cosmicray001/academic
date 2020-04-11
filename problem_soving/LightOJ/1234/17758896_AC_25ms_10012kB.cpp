#include <bits/stdc++.h>
#define le 1000006
#define ga 0.57721566490153
using namespace std;
double n[le];
void fnc(){
  n[1] = 1.0;
  for(int i = 1; i < le; i++) n[i] = n[i - 1] + (1.0 / (i * 1.0));
}
int main(){
  fnc();
  int t, co = 0, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    printf("Case %d: ", ++co);
    if(a <= le) printf("%.10lf\n", n[a]);
    else{
      double ve = a + .5;
      ve = log(ve) + ga;
      printf("%.10lf\n", ve);
    }
  }
  return 0;
}
