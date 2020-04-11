#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  if(a < b) swap(a, b);
  int c = 6 - a + 1;
  if(c == 1) printf("%d/%d\n", 1, 6);
  else if(c == 2) printf("%d/%d\n", 1, 3);
  else if(c == 3) printf("%d/%d\n", 1, 2);
  else if(c == 4) printf("%d/%d\n", 2, 3);
  else if(c == 5) printf("%d/%d\n", 5, 6);
  else if(c == 6) printf("%d/%d\n", 1, 1);
  else if(c == 0) printf("%d\n", 0);
  
  return 0;
}