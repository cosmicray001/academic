#include <bits/stdc++.h>
#define max_len 100010

using namespace std;
int n[max_len];

int main()
{
  int len, dif;
  scanf("%d %d", &len, &dif);
  for(int i = 0; i < len; i++) scanf("%d", &n[i]);
  sort(n, n + len);
  int c = 0, hi = 1, lo = 0;
  while(hi <= len - 1){
    if(n[hi] - n[lo] == dif){
      c++;
      lo++;
    }
    else if(n[hi] - n[lo] < dif) hi++;
    else lo++;
  }
  printf("%d\n", c);
  
  return 0;
}