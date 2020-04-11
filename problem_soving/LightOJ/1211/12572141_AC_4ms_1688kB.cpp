#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, co = 0;
  //long long  a, a1 = 0, b, b1 = 0, c, c1 = 0, x, x1 = 1005, y, y1 = 1005, z, z1 = 1005;
  scanf("%d", &t);
  while(t--){
    int n;
    long long a, a1 = 0, b, b1 = 0, c, c1 = 0, x, x1 = 1005, y, y1 = 1005, z, z1 = 1005;
    scanf("%d", &n);
    while(n--){
      scanf("%lld %lld %lld", &a, &b, &c);
      a1 = max(a1, a);
      b1 = max(b1, b);
      c1 = max(c1, c);
      /*x1 = min(x1, a);
      y1 = min(y1, b);
      z1 = min(z1, c);*/
      scanf("%lld %lld %lld", &x, &y, &z);
      /*a1 = max(a1, a);
      b1 = max(b1, b);
      c1 = max(c1, c);*/
      x1 = min(x1, x);
      y1 = min(y1, y);
      z1 = min(z1, z);
    }
    long long vol = 0;
    if(x1 < a1 || y1 < b1 || z1 < c1){
      printf("Case %d: %lld\n", ++co, vol);  // jakhany bug r voy, sai khany sonda hoy :)
    }
    else{
      vol = ((x1 - a1) * (y1 - b1) * (z1 - c1));
      printf("Case %d: %lld\n", ++co, vol);
    }
  }
  
  return 0;
}