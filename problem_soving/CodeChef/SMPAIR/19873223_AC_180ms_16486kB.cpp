#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];
int main(){
  int t, len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    sort(n, n + len);
    cout << n[0] + n[1] << endl;
  }
  return 0;
}
