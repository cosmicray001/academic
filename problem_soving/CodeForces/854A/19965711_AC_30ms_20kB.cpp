#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, a;
  cin >> n;
  for(int i = 1; i < n + 1; i++){
    if(i >= n - i) continue;
    if(__gcd(i, n - i) == 1) a = i;
  }
  cout << a << " " << n - a << endl;
  return 0;
}
