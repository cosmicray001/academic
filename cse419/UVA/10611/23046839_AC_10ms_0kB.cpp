#include <bits/stdc++.h>
#define le 50010
using namespace std;
int n[le];
int fnc(int a[], int len, int x){
  int hi = len - 1, lo = 0, index = -1, mid;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    if(x == a[mid]){
      index = mid;
      hi = mid - 1;
    }
    else if(x < a[mid]) hi = mid - 1;
    else lo = mid + 1;
  }
  lo--;
  if(lo >= 0) return a[lo];
  return 0;
}
int fnc1(int a[], int len, int x){
  int hi = len - 1, lo = 0, index = -1, mid;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    if(x == a[mid]){
      index = mid;
      lo = mid + 1;
    }
    else if(x < a[mid]) hi = mid - 1;
    else lo = mid + 1;
  }
  if(lo <= len - 1) return a[lo];
  return 0;
}
int main()
{
  int len, q;
  scanf("%d", &len);
  for(int i = 0; i < len; i++) scanf("%d", &n[i]);
  int x, a, b;
  scanf("%d", &q);
  while(q--){
    scanf("%d", &x);
    a = fnc(n, len, x);
    b = fnc1(n, len, x);
    if(!a) printf("X ");
    else printf("%d ", a);
    if(b) printf("%d\n", b);
    else printf("X\n");
  }
  return 0;
}
