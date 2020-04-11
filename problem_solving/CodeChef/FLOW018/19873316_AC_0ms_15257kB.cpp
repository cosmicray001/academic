#include <bits/stdc++.h>
#define ll long long int
#define le 22
using namespace std;
ll n[le];
int main(){
  int t;
  ll a, sum = 1;
  for(scanf("%d", &t); t--; ){
    cin >> a;
    if(a == 0) cout << 1 << endl;
    else{
      sum = 1;
      for(int i = 2; i < a + 1; i++) sum *= i;
      cout << sum << endl;
    }
  }
  return 0;
}
