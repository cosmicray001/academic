#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le >> 6];
vector<int> v;
vector<int> f;
int vis[le];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int bfs(int a, int b){
  memset(vis, -1, sizeof(vis));
  vis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v.size() && v[i] < p; i++){
      if(p % v[i] == 0) f.push_back(v[i]);
    }
    for(int i = 0; i < f.size(); i++){
      int ve = p + f[i];
      if(vis[ve] == -1 && ve <= b){
        vis[ve] = vis[p] + 1;
        q.push(ve);
      }
    }
    f.clear();
  }
  return vis[b];
}
int main(){
  se();
  int t, co = 0, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &a, &b);
    printf("Case %d: %d\n", ++co, bfs(a, b));
    f.clear();
  }
}