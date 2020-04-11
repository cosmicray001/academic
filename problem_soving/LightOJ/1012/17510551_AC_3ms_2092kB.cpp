#include <bits/stdc++.h>
#define le 22
using namespace std;
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
bool n[le][le], vis[le][le];
int bfs(int x, int y, int r, int c){
  for(int i = 0; i < 20; i++) for(int j = 0; j < 20; vis[i][j] = false, j++);
  vis[y][x] = true;
  int ans = 1;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(x, y));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int px = p.first + fx[i], py = p.second + fy[i];
      if(px >= 0 && py >= 0 && n[py][px] == true && vis[py][px] == false && px < c && py < r){
        ans++;
        vis[py][px] = true;
        q.push(pair<int, int>(px, py));
      }
    }
  }
  return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, x, y, r, c;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &c, &r);
    for(int i = 0; i < r; i++){
      char ch[22];
      scanf("%s", ch);
      for(int j = 0; j < c; j++){
        if(ch[j] == '.') n[i][j] = true;
        else if(ch[j] == '#') n[i][j] = false;
        else{
          x = j;
          y = i;
          n[i][j] = false;
        }
      }
    }
    printf("Case %d: %d\n", ++co, bfs(x, y, r, c));
  }
  return 0;
}
