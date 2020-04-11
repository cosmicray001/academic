#include <bits/stdc++.h>
//#define max_len 100000;

using namespace std;



int main()
{
  int n[100000];
  int len, q;
  scanf("%d %d", &len, &q);
  for(int i = 0; i < len; i++) scanf("%d", &n[i]);
  
  while(q--){
    int ser;
    scanf("%d", &ser);
    int lo = 0, hi = len - 1, ret = -1;
    while(lo <= hi){
      int mid = (lo + hi) / 2;
      if(ser == n[mid]){
        ret = mid;
        hi = mid - 1;
      }
      else if(ser > n[mid]) lo = mid + 1;
      else hi = mid - 1;
    }
    printf("%d\n", ret);
  }
}

