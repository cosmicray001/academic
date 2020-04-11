#include <bits/stdc++.h>
#define le 100005
using namespace std;
long long int n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  string s;
  cin >> s;
  n[0] = 0;
  for(int i = 0, j = 1; i < s.size(); i++, j++){
    if(s[i] == s[i + 1]) n[j] = n[j - 1] + 1;
    else n[j] = n[j - 1];
  }
  int m, a, b;
  //for(int i = 0; i < s.size() + 1; printf("[%d] ", n[i]), i++);
  scanf("%d", &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    printf("%lld\n", n[b - 1] - n[a - 1]);
  }
  return 0;
}