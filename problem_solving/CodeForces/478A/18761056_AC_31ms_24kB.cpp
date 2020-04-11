#include <bits/stdc++.h>
using namespace std;
int main(){
  int sum = 0, a, b, c;
  for(int i = 0; i < 5; scanf("%d", &a), sum += a, i++);
  if(!sum) printf("-1\n");
  else if(sum % 5 == 0) printf("%d\n", sum / 5);
  else printf("-1\n");
  return 0;
}
