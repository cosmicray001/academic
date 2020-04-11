#include <bits/stdc++.h>
using namespace std;
int n[4];
int main(){
  int t, a;
  for(scanf("%d", &t); t--; ){
    for(int i = 0; i < 3; scanf("%d", &a), n[i] = a, i++);
    sort(n, n + 3);
    cout << n[1] << endl;
  }
  return 0;
}
