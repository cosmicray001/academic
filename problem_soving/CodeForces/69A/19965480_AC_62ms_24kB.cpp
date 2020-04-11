#include <bits/stdc++.h>
using namespace std;
int main(){
  int len, a = 0, b = 0, c = 0, x;
  for(scanf("%d", &len); len--; ){
    for(int i = 0; i < 3; i++){
      scanf("%d", &x);
      if(i == 0) a += x;
      else if(i == 1) b += x;
      else c += x;
    }
  }
  if(a == 0 && b == 0 && c == 0) printf("YES\n");
  else printf("NO\n");
  return 0;
}
