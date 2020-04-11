#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, co = 0, len, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    int m = 0;
    for(int i = 0; i < len; scanf("%d", &a), m = max(m, a), i++);
    printf("Case %d: %d\n", ++co, m);
  }
  return 0;
}
