#include <bits/stdc++.h>
#define le 10
using namespace std;
int fx[] = {1, 2, 2, 1, -1, -2, -2, -1}, fy[] = {2, 1, -1, -2, -2, -1, 1, 2}, len[le][le];
bool vis[le][le];
int bfs(int x, int y, int a, int b){
  for(int i = 0; i < 10; i++) for(int j = 0; j < 10; vis[i][j] = 0, len[i][j] = 0, j++);
  vis[y][x] = true;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(x, y));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      int px = p.first + fx[i];
      int py = p.second + fy[i];
      if(px >= 0 && px < 8 && py >= 0 && py < 8 && vis[py][px] == false){
        len[py][px] = len[p.second][p.first] + 1;
        vis[py][px] = true;
        q.push(pair<int, int>(px, py));
      }
    }
  }
  return len[b][a];
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int r1, c1, r2, c2;
  char ch[4], ch1[4];
  while(scanf("%s %s", ch, ch1) != EOF){
    c1 = ch[0] - 'a';
    r1 = ch[1] - '1';
    c2 = ch1[0] - 'a';
    r2 = ch1[1] - '1';
    printf("To get from %c%c to %c%c takes %d knight moves.\n", ch[0], ch[1], ch1[0], ch1[1], bfs(c1, r1, c2, r2));
  }
  return 0;
}
