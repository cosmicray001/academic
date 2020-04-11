#include <bits/stdc++.h>

using namespace std;

int main()
{
  int len, s;
  scanf("%d %d", &len, &s);
  int max_ve = 0;
  int a, b;
  bool f = 0;
  for(int i = 0; i < len; i++){
    scanf("%d %d", &a, &b);
    if(a < s && (100 - b) > max_ve && b){
      max_ve = max(max_ve, (100 - b));
      f = 1;
    }
    else if(b == 0 && a <= s){
      max_ve = max(max_ve, 0);
      f = 1;
    }
  }
  if(f) printf("%d\n", max_ve);
  else printf("-1\n");
  
  return 0;
}
