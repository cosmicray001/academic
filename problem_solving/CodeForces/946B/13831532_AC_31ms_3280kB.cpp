#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll a, b;
  scanf("%lld %lld", &a, &b);
  while(a && b){
    if(a >= 2 * b) a %= 2 * b;
    else if(b >= 2 * a) b %= 2 * a;
    else break;
  }
  printf("%lld %lld\n", a, b);
  return 0;
}