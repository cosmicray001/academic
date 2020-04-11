#include <bits/stdc++.h>
#define le 30
using namespace std;
char n[le][le];
int dis[le][le], fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool vis[le][le];
int dijkstra(int a, int b, int r, int c, int x, int y){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, dis[i][j] = INT_MAX, j++);
  dis[a][b] = 0;
  priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int> > > > q;
  q.push(make_pair(0, make_pair(a, b)));
  while(!q.empty()){
    pair<int, pair<int, int> > p = q.top();
    q.pop();
    a = p.second.first;
    b = p.second.second;
    int w = p.first;
    if(vis[x][y]) return dis[x][y];
    if(vis[a][b]) continue;
    vis[a][b] = true;
    for(int i = 0; i < 4; i++){
      int py = a + fy[i], px = b + fx[i];
      if(px >= 0 && px < c && py >= 0 && py < r && dis[py][px] > w + (n[a][b] - '0') && n[py][px] != 'X'){
        dis[py][px] = w + (n[a][b] - '0');
        q.push(make_pair(dis[py][px], make_pair(py, px)));
      }
    }
  }
  return dis[x][y];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, r, c, x, y, a, b;
  string s;
  while(scanf("%d %d", &c, &r) != EOF && (r || c)){
    for(int i = 0; i < r; i++){
        cin >> s;
        for(int j = 0; j < c; j++){
            n[i][j] = s[j];
            if(s[j] == 'S'){
                x = i;
                y = j;
                n[i][j] = '0';
            }
            if(s[j] == 'D'){
                a = i;
                b = j;
                n[i][j] = '0';
            }
        }
    }
    printf("%d\n", dijkstra(x, y, r, c, a, b));
  }
  return 0;
}
