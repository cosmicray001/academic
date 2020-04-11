#include <bits/stdc++.h>

using namespace std;

bool fnc(long long int n){
  int c = 0;
  for(; n > 0; n /= 2){
    int re = n % 2;
    if(re == 1) c++;
  }
  if(c % 2 == 0) return 1;
  else return 0;
}

int main()
{
  long long int n;
  int t, c = 0;
  scanf("%d", &t);
  while(t--){
    scanf("%lld", &n);
    bool f = fnc(n);
    printf("Case %d: %s\n", ++c, f ? "even" : "odd");
  }
  
  return 0;
}