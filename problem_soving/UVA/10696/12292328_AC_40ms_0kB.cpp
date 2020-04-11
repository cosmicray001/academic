#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;
  while(scanf("%d", &a) != EOF && a){
    printf("f91(%d) = %d\n", a, (a <= 100) ? 91 : a - 10);
  }
  return 0;
}