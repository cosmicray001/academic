#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, g, i, n, q;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &g);
    while(g--){
      scanf("%d %d %d", &i, &n, &q);
      if(n % 2 == 0 || (i == q)) cout << (n >> 1) << endl;
      else cout << (n >> 1) + 1 << endl;
    }
  }
  return 0;
}
