#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  a = abs(a - x);
  b = abs(b - y);
  cout << max(a, b) << endl;
  return 0;
}
