#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    printf("%d %d\n", a / 2, a - (a / 2));
  }
  return 0;
}
