#include <bits/stdc++.h>
#define le 1010

using namespace std;
int n[le];

int main()
{
  int len, c = 0;
  scanf("%d", &len);
  scanf("%d", &n[0]);
  int max_ve = n[0], min_ve = n[0];
  for(int i = 1; i < len; i++){
    scanf("%d", &n[i]);
    if(max_ve < n[i]){
      max_ve = max(max_ve, n[i]);
      //printf("%d ma\n", max_ve);
      c++;
    }
    else if(min_ve > n[i]){
      min_ve = min(min_ve, n[i]);
      //printf("%d mi\n", min_ve);
      c++;
    }
  }
  printf("%d\n", c);
  
  return 0;
}