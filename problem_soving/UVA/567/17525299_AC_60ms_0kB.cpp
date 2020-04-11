#include <bits/stdc++.h>
#define le 22
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
int bfs(int a, int b){
  for(int i = 0; i < 21; vis[i] = false, dis[i] = 0, i++);
  vis[a] = true;
  dis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int ve = v[p][i];
      if(vis[ve] == false){
        vis[ve] = true;
        dis[ve] = dis[p] + 1;
        q.push(ve);
      }
    }
  }
  return dis[b];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, x, co = 0;
  while(scanf("%d", &len) != EOF){
    while(len--){
      scanf("%d", &x);
      v[1].push_back(x);
      v[x].push_back(1);
    }
    for(int i = 0; i < 18; i++){
      scanf("%d", &len);
      while(len--){
        scanf("%d", &x);
        v[i + 2].push_back(x);
        v[x].push_back(i + 2);
      }
    }
    int n, a, b;
    scanf("%d", &n);
    printf("Test Set #%d\n", ++co);
    while(n--){
      scanf("%d %d", &a, &b);
      printf("%2d to %2d: %d\n", a, b, bfs(a, b));
    }
    for(int i = 0; i < 21; v[i].clear(), i++);
    printf("\n");
  }
  return 0;
}
