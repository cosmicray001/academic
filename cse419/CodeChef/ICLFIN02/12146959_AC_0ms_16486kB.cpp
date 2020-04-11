#include <bits/stdc++.h>
#define le 100010

using namespace std;
int x = 0, y = 1010;
int n[le];


int main()
{
  memset(n, 0, le);
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    int a;
    scanf("%d", &a);
    n[a]++;
    x = max(x, a);
    y = min(y, a);
  }
  int p = 0, po = 0;
  for(int i = x; i >= y; i--){
    if(p <= n[i]){
      p = n[i];
      po = i;
    }
  }
  printf("%d\n%d\n", po, p);
  
  return 0;
}