#include <bits/stdc++.h>
using namespace std;
int x;
int main(){
  int a = -INT_MAX, b = INT_MAX, c = INT_MAX, len, len1;
  scanf("%d %d", &len, &len1);
  for(int i = 0; i < len; i++){
    scanf("%d", &x);
    a = max(a, x);
    b = min(b, x);
  }
  for(int i = 0; i < len1; i++){
    scanf("%d", &x);
    c = min(c, x);
  }
  if(max(2 * b, a) < c){
    printf("%d\n", max(2 * b, a));
    return 0;
  }
  cout << -1 << endl;
  return 0;
}