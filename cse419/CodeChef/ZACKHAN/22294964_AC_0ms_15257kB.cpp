#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    printf("%d\n", __gcd(a, b));
  }
  return 0;
}
