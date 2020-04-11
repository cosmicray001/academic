#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  while(scanf("%d", &t) != EOF && t){
    int c = 0;
    for(int i = 1; i < t; i++){
      for(int j = i + 1; j <= t; j++){
        c += __gcd(i, j);
      }
    }
    printf("%d\n", c);
  }
  
  return 0;
}