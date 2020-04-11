#include <bits/stdc++.h>
#define le 100010

using namespace std;
int n[le];

int main()
{
  int t, len, m;
  scanf("%d", &t);
  while(t--){
    for(int i = 0; i < le; i++) n[i] = 0;
    scanf("%d", &len);
    int ve = 0;
    for(int i = 0; i < len; i++){
      scanf("%d", &m);
      n[m] = 1;
      ve = max(ve, m);
    }
    int sum = 0;
    for(int i = 0; i <= ve; i++){
      if(n[i]) sum++;
    }
    printf("%d\n", sum);
  }
  
  return 0;
}