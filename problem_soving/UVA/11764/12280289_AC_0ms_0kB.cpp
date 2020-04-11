#include <bits/stdc++.h>

using namespace std;
int n[60];
int main()
{
  int t, co = 0;
  int c, c1, len;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &len);
    c = 0;
    c1 = 0;
    scanf("%d", &n[0]);
    for(int i = 1; i < len; i++){
      scanf("%d", &n[i]);
      if(n[i] > n[i - 1]) c++;
      else if(n[i] < n[i - 1]) c1++;
    }
    printf("Case %d: %d %d\n", ++co, c, c1);
  }
  return 0;
}