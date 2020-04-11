#include <bits/stdc++.h>
using namespace std;
#define le 502
int n[le][le], fx[] = {1, -1, 0, 0, 0}, fy[] = {0, 0, 1, -1}, cal[le][le];
bool vis[le][le];
int bfs(int x, int y, int r, int c){
  for(int i = 0; i <= r; i++) for(int j = 0; j <= c; vis[i][j] = 0, j++);
  vis[y][x] = 1;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(x, y));
  int ans = 0;
  if(n[y][x] == 3) ans++;
  vector<pair<int, int> > ve;
  ve.push_back(pair<int, int>(x, y));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int px = p.first + fx[i], py = p.second + fy[i];
      if(px > 0 && px <= c && py > 0 && py <= r && vis[py][px] == false && n[py][px] != 1){
        if(n[py][px] == 3) ans++;
        vis[py][px] = true;
        q.push(pair<int, int>(px, py));
        ve.push_back(pair<int, int>(px, py));
      }
    }
  }
  for(int i = 0; i < ve.size(); i++){
    pair<int, int> pa = ve[i];
    cal[pa.second][pa.first] = ans;
  }
  return ans;
}
int main(){
  int t, co = 0, x, y, r, c, q;
  for(scanf("%d", &t); t--; ){
    char ch[502];
    scanf("%d %d %d", &r, &c, &q);
    for(int i = 0; i <= r; i++) for(int j = 0; j <= c; cal[i][j] = -1, j++);
    getchar();
    for(int i = 1; i <= r; i++){
      scanf("%s", ch);
      for(int j = 1; j <= c; j++){
        if(ch[j - 1] == '.') n[i][j] = 2;
        else if(ch[j - 1] == 'C') n[i][j] = 3;
        else if(ch[j - 1] == '#') n[i][j] = 1;
      }
      getchar();
    }
    printf("Case %d:\n", ++co);
    while(q--){
      scanf("%d %d", &y, &x);
      if(cal[y][x] != -1) printf("%d\n", cal[y][x]);
      else printf("%d\n", bfs(x, y, r, c));
    }
  }
  return 0;
}
