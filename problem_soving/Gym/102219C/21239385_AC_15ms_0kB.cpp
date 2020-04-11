#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  int t, r, s, a, b, co = 0;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &s);
    int maxx = -INT_MAX;
    for(int i = 0; i < r; i++){
      scanf("%d %d", &a, &b);
      if(b <= s) maxx = max(maxx, a);
      else maxx = max(maxx, a - (b - s));
    }
    printf("Case #%d: %d\n", ++co, maxx);
  }
  return 0;
}
