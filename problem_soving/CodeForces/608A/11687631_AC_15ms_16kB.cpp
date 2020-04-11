#include <bits/stdc++.h>
#define le 1010

using namespace std;
int n[le];
int m[le];

int main()
{
  int len, b;
  scanf("%d %d", &len, &b);
  for(int i = 0; i < len; i++) scanf("%d %d", &n[i], &m[i]);
  
  int ht = 0, hb = b, sum = 0, ans = 0;
  for(int i = len - 1; i >= 0; i--){
    ht += hb - n[i];
    hb = n[i];
    if(ht < m[i]){
      int x = m[i] - ht;
      ht += x;
      ans += x;
    }
  }
  printf("%d\n", ans + b);
  
  return 0;
}