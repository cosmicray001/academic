#include <bits/stdc++.h>

using namespace std;

bool fnc(int a){
  int temp = a, rev = 0;
  for(; temp > 0; temp /= 10){
    rev = (rev * 10) + (temp % 10);
  }
  if(rev == a) return 1;
  else return 0;
}

int main()
{
  int t, c = 0;
  int a;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &a);
    bool f  = fnc(a);
    printf("Case %d: %s\n", ++c, f ? "Yes" : "No");
  }
  
  return 0;
}