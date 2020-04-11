#include <bits/stdc++.h>
#define max_len 110
using namespace std;

int n[max_len];

int fnc(int a[], int l, int k)
{
  int c = 0;
  for(int i = 0; i < l; i++){
    for(int j = l - 1; j > i; j--){
      if((a[i] + a[j]) % k == 0) c++;
    }
  }
  return c;
}

int main()
{
  int len, div;
  scanf("%d %d", &len, &div);
  for(int i = 0; i < len; i++) scanf("%d", &n[i]);
  int ans = fnc(n, len, div);
  printf("%d\n", ans);
  
}