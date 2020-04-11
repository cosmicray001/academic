#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    printf("Case %d: %d\n", ++co, a + b);
  }
  return 0;
}
