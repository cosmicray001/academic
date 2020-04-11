#include <bits/stdc++.h>
#define le 22
using namespace std;
bool n[le][le], vis[le][le];
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1}, len[le][le];
void bfs(int x, int y, int r, int c){
  for(int i = 0; i < 20; i++) for(int j = 0; j < 20; vis[i][j] = false, len[i][j] = 0, j++);
  vis[y][x] = true;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(x, y));
  len[y][x] = 0;
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int px = p.first + fx[i];
      int py = p.second + fy[i];
      if(px >= 0 && py >= 0 && n[py][px] == true && vis[py][px] == false && px < c && py < r){
        len[py][px] = len[p.second][p.first] + 1;
        vis[py][px] = true;
        q.push(pair<int, int>(px, py));
      }
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, r, c, x[4], y[4], hx, hy;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &r, &c);
    char ch[22];
    for(int i = 0; i < r; i++){
      scanf("%s", ch);
      for(int j = 0; j < c; j++){
        if(ch[j] == '.') n[i][j] = true;
        else if(ch[j] == 'a'){
          x[0] = j;
          y[0] = i;
          n[i][j] = true;
        }
        else if(ch[j] == 'b'){
          n[i][j] = true;
          x[1] = j;
          y[1] = i;
        }
        else if(ch[j] == 'c'){
          n[i][j] = true;
          x[2] = j;
          y[2] = i;
        }
        else if(ch[j] == 'h'){
          n[i][j] = true;
          hx = j;
          hy = i;
        }
        else n[i][j] = false;
      }
    }
    bfs(hx, hy, r, c);
    int ans = -1;
    for(int i = 0; i < 3; i++) ans = max(ans, len[y[i]][x[i]]);
    printf("Case %d: %d\n", ++co, ans);
  }
  return 0;
}
