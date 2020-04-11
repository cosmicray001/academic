#include <bits/stdc++.h>

using namespace std;


int main(){
  int t, co = 0;
  long long a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%lld %lld", &a, &b);
    a /= 2;
    printf("Case %d: %lld\n", ++co, (a * b));
  }
  return 0;
}