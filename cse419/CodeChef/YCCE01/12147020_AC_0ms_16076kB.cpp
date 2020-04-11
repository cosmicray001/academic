#include <bits/stdc++.h>

using namespace std;

bool fnc(long long int a, long long int b){
  a *= b;
  if(a % 2 == 0) return 1;
  return 0;
}

int main()
{
  long long int a, b;
  int t;
  scanf("%d", &t);
  while(t--){
    scanf("%lld %lld", &a, &b);
    bool f = fnc(a, b);
    printf("%s\n", f ? "Yes" : "No");
  }
  
  return 0;
}