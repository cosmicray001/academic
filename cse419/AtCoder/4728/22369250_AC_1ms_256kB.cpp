#include <bits/stdc++.h>
using namespace std;
int main(){
  int len, x, a = 1, sum = 0, ve;
  scanf("%d %d", &len, &x);
  for(int i = 0; i < len; i++){
    scanf("%d", &ve);
    sum += ve;
    if(sum <= x) a++;
  }
  printf("%d\n", a);
  return 0;
}
