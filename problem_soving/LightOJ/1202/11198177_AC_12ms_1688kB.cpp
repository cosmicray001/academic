#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, c = 0;
  int x, y, a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d %d %d", &x, &y, &a, &b);
    if((x + y) % 2 != (a + b) % 2) printf("Case %d: impossible\n", ++c);
    else{
      if(abs(x - a) == abs(y - b)) printf("Case %d: 1\n", ++c);
      else printf("Case %d: 2\n", ++c);
    }
  }
}