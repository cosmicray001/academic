#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a;
  for(scanf("%d", &t); t--; ){
    int sum = 0;
    cin >> a;
    for(; a > 0.; a /= 10) sum += (a % 10);
    cout << sum << endl;
  }
  return 0;
}
