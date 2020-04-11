#include <bits/stdc++.h>
using namespace std;
int fnc(int x, int a, int b, int n){
  int hi = (n - a * x) / b, lo = 0, mid;
  while(lo <= hi){
    mid = (lo + hi) >> 1;
    int re = (a * x) + (mid * b);
    if(re == n) return mid;
    else if(re > n) hi = mid - 1;
    else lo = mid + 1;
  }
  return -1;
}
int main(){
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  for(int i = 0; i * a <= n; i++){
    int x = fnc(i, a, b, n);
    if(x != -1){
      printf("YES\n%d %d\n", i, x);
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}