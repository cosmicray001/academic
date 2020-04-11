#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x, y;
  int t;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d %d", &n, &x, &y);
    for(int i = x; i < n; i++){
      if(i % y != 0 && i % x == 0) printf("%d ", i);
    }
    printf("\n");
  }

  return 0;
}