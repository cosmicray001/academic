#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b, co = 0;
  for(scanf("%d", &t); t--; ){
    cin >> a >> b;
    if(a % 2 == 0) a++;
    int sum = 0;
    for(int i = a; i < b + 1; sum += i, i += 2);
    printf("Case %d: %d\n", ++co, sum);
  }
  return 0;
}
