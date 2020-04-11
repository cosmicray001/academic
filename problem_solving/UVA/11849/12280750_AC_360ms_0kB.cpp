#include <bits/stdc++.h>
#define le 1000010

using namespace std;
int n[le];

bool fnc(int x, int a[], int len){
  int hi = len - 1, lo = 0, mid;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    if(x == a[mid]) return 1;
    else if(x < n[mid]) hi = mid - 1;
    else lo = mid + 1;
  }
  return 0;
}

int main()
{
  int a, b;
  int x, y;
  while(scanf("%d %d", &a, &b) && a && b){
    int c = 0;
    for(int i = 0; i < a; i++) scanf("%d", &n[i]);
    while(b--){
      scanf("%d", &y);
      if(fnc(y, n, a)) c++;
    }
    printf("%d\n", c);
  }
}