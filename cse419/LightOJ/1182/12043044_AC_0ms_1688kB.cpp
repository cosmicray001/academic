#include <bits/stdc++.h>

using namespace std;

bool fnc(long long int a){
  int sum = 0;
  for(; a > 0; a /= 2){
    int re = a % 2;
    if(re % 2 == 1) sum++;
  }
  if(sum % 2 == 0) return 1;
  else return 0;
}

int main()
{
  int t, c = 0;
  long long int a;
  scanf("%d", &t);
  while(t--){
    scanf("%lld", &a);
    bool f = fnc(a);
    printf("Case %d: %s\n", ++c, f ? "even" : "odd");
  }
  
  return 0;
}