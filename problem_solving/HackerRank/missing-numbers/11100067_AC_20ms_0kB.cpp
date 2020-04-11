#include <bits/stdc++.h>
#define max_len 200010

using namespace std;

int n[max_len];
int m[max_len];
int o[max_len];


int main()
{
  int len1, len2;
  memset(n, 0, max_len);
  memset(m, 0, max_len);
  scanf("%d", &len1);
  for(int i = 0; i < len1; i++){
    int x;
    scanf("%d", &x);
    n[x]++;
  }
  scanf("%d", &len2);
  for(int i = 0; i < len2; i++){
    int x;
    scanf("%d", &x);
    o[i] = x;
    m[x]++;
  }
  
  sort(o, o + len2);
  
  int hi = o[len2 - 1], lo = o[0];
  for(int i = lo; i <= hi; i++){
    if(m[i] > n[i]) printf("%d ", i);
  }
  printf("\n");
  
  return 0;
}