#include <bits/stdc++.h>
#define le 1000006
using namespace std;
double n[le];
void sol(){
  n[0] = 0.0;
  for(int i = 1; i < le; i++){
    n[i] = n[i - 1] + log10(i * 1.0);
  }
}
int main(){
  sol();
  int t, co = 0, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    double x = n[a] / log10(b);
    printf("Case %d: %d\n", ++co, ((int) x) + 1);
  }
  return 0;
}