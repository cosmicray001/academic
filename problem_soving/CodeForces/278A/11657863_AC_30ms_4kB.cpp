#include <bits/stdc++.h>

using namespace std;

int main()
{
  int len, s, e, sum1 = 0;
  int n[110];
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    scanf("%d", &n[i]);
    sum1 += n[i];
  }
  int sum = 0;
  scanf("%d %d", &s, &e);
  if(s > e) swap(s, e);
  int x = e - s;
  for(int i = s - 1; i < e - 1; i++){
    sum += n[i];
  }
  sum1 -= sum;
  printf("%d\n", sum1 > sum ? sum : sum1);
  
  return 0;
}