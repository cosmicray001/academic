#include <bits/stdc++.h>

using namespace std;

bool fnc(long long int a1, long long int v1, long long int a2, long long int v2){
  long long int del_a = a2 - a1, del_v = v1 - v2;
  if(del_v > 0 && (del_a % del_v == 0)) return 1;
  else return 0;
}

int main()
{
  long long int a, b, av, bv;
  scanf("%lld %lld %lld %lld", &a, &b, &av, &bv);
  bool ans = fnc(a, b, av, bv);
  printf("%s\n", ans ? "YES" : "NO");
}