#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, co = 0, m, l;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &m, &l);
    printf("Case %d: %d\n", ++co, (l > m) ? (l * 4 + 19) : ((2 * m - l) * 4 + 19));
  }
  return 0;
}
