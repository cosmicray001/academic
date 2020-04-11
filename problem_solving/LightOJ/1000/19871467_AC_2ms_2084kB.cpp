#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, co = 0, a, b;
  for(scanf("%d", &t); t--; ){
    cin >> a >> b;
    printf("Case %d: %d\n", ++co, a + b);
  }
  return 0;
}
