#include <bits/stdc++.h>
using namespace std;
int main(){
  int a;
  scanf("%d", &a);
  if(a & 1) printf("%d %d\n", 9, a - 9);
  else printf("%d %d\n", 4, a - 4);
  return 0;
}
