#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, co = 0, a,len;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    int sum = 0;
    for(int i = 0; i < len; i++){
      scanf("%d", &a);
      if(a >= 0) sum += a;
    }
    printf("Case %d: %d\n", ++co, sum);
  }
  return 0;
}
