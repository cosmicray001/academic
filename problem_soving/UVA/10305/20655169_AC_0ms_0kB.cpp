#include <bits/stdc++.h>
#define le 102
using namespace std;
int in[le];
vector<int> ans;
vector<int> v[le];
void bfs(int n){
  queue<int> q;
  for(int i = 1; i < n + 1; i++) if(in[i] == 0) q.push(i);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    ans.push_back(p);
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      in[e]--;
      if(in[e] == 0) q.push(e);
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n, m, a, b;
  while(scanf("%d %d", &n, &m) != EOF && (n || m)){
    for(int i = 0; i < le; in[i] = 0, i++);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      in[b]++;
      v[a].push_back(b);
    }
    //for(int i = 1; i < n + 1; i++) sort(v[i].begin(), v[i].end());
    bfs(n);
    for(int i = 0; i < ans.size() - 1; i++) printf("%d ", ans[i]);
    printf("%d\n", ans[ans.size() - 1]);
    ans.clear();
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
