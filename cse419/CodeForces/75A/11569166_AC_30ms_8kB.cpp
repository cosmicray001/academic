#include <bits/stdc++.h>

using namespace std;

long long int fnc(long long int a){
  long long int z_free = 0;
  for(; a > 0; a /= 10){
    int re = a % 10;
    if(re != 0){
      z_free = (z_free * 10) + re;
    }
    //z_free
  }
  long long int z = 0;
  for(; z_free > 0; z_free /= 10) z = (z * 10) + (z_free % 10);
  return z;
}

int main()
{
  long long int a, b, c;
  scanf("%lld %lld", &a, &b);
  c =  a + b;
  a = fnc(a);
  b = fnc(b);
  c = fnc(c);
  bool f = 0;
  if(a + b == c) f = 1;
  printf("%s\n", f ? "YES" : "NO");
  
  return 0;
}