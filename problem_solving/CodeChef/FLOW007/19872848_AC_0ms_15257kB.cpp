#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    int sum = 0;
    for(; a > 0; a /= 10) sum = (sum * 10) + (a % 10);
    cout << sum << endl;
  }
  return 0;
}
