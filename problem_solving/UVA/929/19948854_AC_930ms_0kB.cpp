#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le][le], dis[le][le], fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool vis[le][le];
int dijkstra(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, dis[i][j] = INT_MAX, j++);
  dis[a][b] = n[a][b];
  priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int> > > > q;
  q.push(make_pair(n[a][b], make_pair(a, b)));
  while(!q.empty()){
    pair<int, pair<int, int> > p = q.top();
    q.pop();
    a = p.second.first;
    b = p.second.second;
    int w = p.first;
    for(int i = 0; i < 4; i++){
      int py = a + fy[i], px = b + fx[i];
      if(px >= 0 && px < c && py >= 0 && py < r && dis[py][px] > w + n[py][px]){
        dis[py][px] = w + n[py][px];
        q.push(make_pair(dis[py][px], make_pair(py, px)));
      }
    }
  }
  return dis[r - 1][c - 1];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, r, c;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) scanf("%d", &n[i][j]);
    printf("%d\n", dijkstra(0, 0, r, c));
  }
  return 0;
}
