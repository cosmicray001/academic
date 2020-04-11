#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;
  //int sum = 0;
  while(scanf("%d", &a) != EOF && a){
    int sum = 0;
    for(int i = 1; i < a; i++){
      for(int j = i + 1; j <= a; j++) sum += __gcd(i, j);
    }
    printf("%d\n", sum);
  }
  
  return 0;
}