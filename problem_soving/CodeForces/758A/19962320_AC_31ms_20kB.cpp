#include <bits/stdc++.h>
#define ll long long int
#define le 102
using namespace std;
int n[le];
int main(){
  int len, m = -1, sum = 0;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%d", &n[i]), m = max(m, n[i]), i++);
  for(int i = 0; i < len; sum += (m - n[i]), i++);
  cout << sum << endl;
  return 0;
}
