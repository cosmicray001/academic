#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    int sum = 0;
    for(; a > 0; a /= 10) sum += (a % 10);
    printf("%d\n", sum);
  }
  return 0;
}
