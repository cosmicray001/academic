#include <bits/stdc++.h>
#define le 10004
#define ma -1
using namespace std;
vector<int> v[le];
vector<int> cost[le];
int dis[le], vis[le];
int n, e;
void dijkstra(int s){
    //priority_queue<int> q;
    queue<int> q;
    for(int i = 0; i < le; dis[i] = ma, i++);
    q.push(s);
    dis[s] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0; i < v[u].size(); i++){
            int ve = v[u][i];
            if(dis[u] + 1 > dis[ve]){
                dis[ve] = dis[u] + 1;
                q.push(ve);
            }
        }
    }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t, n, m, a, b;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
      scanf("%d %d", &a, &b);
      v[a].push_back(b);
    }
    dijkstra(1);
    printf("%d\n", dis[n] - 1);
    for(int i = 0; i < le; v[i].clear(), i++);
  }
  return 0;
}
