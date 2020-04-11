#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  //freopen("input.txt", "r", stdin);
  ll len, k, co = 0, a;
  scanf("%lld %lld", &len, &k);
  while(len--){
    scanf("%lld", &a);
    if(a % k == 0) co++;
  }
  printf("%lld\n", co);
  return 0;
}
