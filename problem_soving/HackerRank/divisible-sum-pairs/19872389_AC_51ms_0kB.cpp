#include <bits/stdc++.h>
#define le 110
using namespace std;
int n[le];
int main(){
  int len, k, co = 0;
  scanf("%d %d", &len, &k);
  for(int i = 0; i < len; scanf("%d", &n[i]), i++);
  for(int i = 0; i < len - 1; i++) for(int j = i + 1; j < len; j++) if((n[i] + n[j]) % k == 0) co++;
  cout << co << endl;
  return 0;
}
