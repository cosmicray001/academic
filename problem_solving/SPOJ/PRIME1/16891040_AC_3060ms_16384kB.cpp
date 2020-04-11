#include <bits/stdc++.h>
 
using namespace std;
 
bool fnc(long long a){
  if(a == 1) return 0;
  if(a == 2) return 1;
  if(a % 2 == 0) return 0;
  long long rt = sqrt(a) + 1;
  for(long long i = 3; i <= rt; i += 1){
    if(a % i == 0) return 0;
  }
  return 1;
}
 
int main(){
  int t;
  long long a, b;
  scanf("%d", &t);
  while(t--){
    scanf("%lld %lld", &a, &b);
    for(long long i = a; i <= b; i++){
      if(fnc(i)) printf("%lld\n", i);
    }
    if(t) printf("\n");
  }
  return 0;
}