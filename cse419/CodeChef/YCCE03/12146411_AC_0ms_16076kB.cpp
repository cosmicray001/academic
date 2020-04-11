#include <bits/stdc++.h>

using namespace std;

bool fnc(int a){
  if(a % 2 == 0) return 1;
  else return 0;
}

int main()
{
  int a, b;
  scanf("%d", &a);
  int temp = a, c1 = 0, c2 = 0;
  while(temp--){
    scanf("%d", &b);
    bool f = fnc(b);
    if(f) c1++;
    else c2++;
  }
  printf("%s\n", c1 > c2 ? "READY FOR BATTLE" : "NOT READY");
  
  return 0;
}