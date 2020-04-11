#include <bits/stdc++.h>
#define le 1000006
using namespace std;
vector<int> v[le];
bool ck[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int len, q, a, b;
  while(scanf("%d%d", &len, &q) != EOF){
    memset(ck, 0, sizeof(ck));
    for(int i = 1; i < len + 1; scanf("%d", &a), v[a].push_back(i), ck[a] = true, i++);
    while(q--){
      scanf("%d%d", &a, &b);
      if(!ck[b] || v[b].size() < a) printf("0\n");
      else printf("%d\n", v[b][a - 1]);
    }
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
