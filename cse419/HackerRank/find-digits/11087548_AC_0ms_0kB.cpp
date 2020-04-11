#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, n, temp;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    temp = n;
    int c = 0;
    for(; temp > 0; temp /= 10){
      int re = temp % 10;
      if(re != 0 && n % re == 0) c++;
    }
    printf("%d\n", c);
  }
  
  return 0;
}