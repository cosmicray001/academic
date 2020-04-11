#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, n, ned;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &n, &ned);
    int c = 0, x = 0;
    bool f = false;
    for(int i = 0; i < n; i++){
      scanf("%d", &x);
      if(x <= 0){
        c++;
      }
    }
    if(c >= ned) printf("NO\n");
    else printf("YES\n");
  }
  
  return 0;
}