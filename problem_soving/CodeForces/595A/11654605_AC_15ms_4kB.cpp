#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  int len;
  int a, b;
  scanf("%d %d", &t, &len);
  int c = 0;
  while(t--){
    int temp = len;
    while(temp--){
      scanf("%d %d", &a, &b);
      if(a == 1 || b == 1) c++;
    }
  }
  printf("%d\n", c);
  
  return 0;
}