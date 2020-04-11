#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    printf("%d\n", a % b);
  }
  return 0;
}
