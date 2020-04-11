#include <bits/stdc++.h>
using namespace std;
int main(){
  int sum = 0, len, a;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%d", &a), sum += a, i++);
  cout << sum << endl;
  return 0;
}
