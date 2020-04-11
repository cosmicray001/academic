#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll a, b;
  int co = 0;
  scanf("%lld %lld", &a, &b);
  while(a <= b){
    b = b << 1;
    a = a * 3;
    co++;
  }
  printf("%d\n", co);
  return 0;
}