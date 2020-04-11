#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    int sum = 0;
    for(int i  = 1; i < b + 1; i++) sum = max(sum, a % i);
    printf("%d\n", sum);
  }
  return 0;
}
