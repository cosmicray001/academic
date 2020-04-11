#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int n[4];
  int t, co = 0;
  scanf("%d", &t);
  while(t--){
    for(int i = 0; i < 3; i++) scanf("%lld", &n[i]);
    bool f = 0;
    sort(n, n + 3);
    if((n[0] + n[1] > n[2]) && (pow(n[0], 2) + pow(n[1], 2) == pow(n[2], 2))) f = 1;
    printf("Case %d: %s\n", ++co, f ? "yes" : "no");
  }
  
  return 0;
}