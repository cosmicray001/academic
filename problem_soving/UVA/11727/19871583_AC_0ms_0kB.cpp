#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, n[4], co = 0;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < 3; scanf("%d", &n[i]), i++);
    sort(n, n + 3);
    printf("Case %d: %d\n", ++co, n[1]);
  }
  return 0;
}
