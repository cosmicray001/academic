#include <bits/stdc++.h>
#define le 1003
using namespace std;
bool vis[le], ck[le];
int mo[le];
set<int> st;
vector<int> v[le];
bool bfs(int a){
  memset(vis, 0, sizeof(vis));
  vis[a] = true;
  ck[a] = true;
  int n = 1, sum = mo[a];
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      if(!vis[e]){
        vis[e] = true;
        ck[e] = true;
        sum += mo[e];
        n++;
        q.push(e);
      }
    }
  }
  if(sum % n == 0){
    st.insert(sum / n);
    return true;
  }
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, n, m, a, b;
  for(scanf("%d", &t); t--; ){
    memset(ck, 0, sizeof(ck));
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; scanf("%d", &mo[i + 1]), i++);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
      v[b].push_back(a);
    }
    bool f = true;
    for(int i = 1; i < n + 1; i++){
      if(!ck[i]){
        if(!bfs(i)){
          f = false;
          break;
        }
      }
    }
    if(f && st.size() == 1) printf("Case %d: Yes\n", ++co);
    else printf("Case %d: No\n", ++co);
    for(int i = 0; i < le; v[i].clear(), i++);
    st.clear();
  }
}
