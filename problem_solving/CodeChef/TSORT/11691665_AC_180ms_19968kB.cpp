#include <bits/stdc++.h>
#define le 1000010

using namespace std;
int n[le];

int main()
{
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len; i++) scanf("%d", &n[i]);
  sort(n, n + len);
  for(int i = 0; i < len; i++){
    printf("%d\n", n[i]);
  }
  
  return 0;
}