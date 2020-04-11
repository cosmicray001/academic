#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b, sum;
  for(scanf("%d", &t); t--; ){
    cin >> sum;
    if(sum >= 10) printf("%d %d\n", 10, sum - 10);
    else printf("%d %d\n", 0, sum);
  }
  return 0;
}
