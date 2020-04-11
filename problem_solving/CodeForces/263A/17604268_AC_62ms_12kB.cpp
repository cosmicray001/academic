#include <bits/stdc++.h>
#define le 6
using namespace std;
bool n[le][le], vis[le][le];
int len[le][le], fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
int bfs(int a, int b){
  vis[2][2] = true;
  len[2][2] = 0;
  queue<pair<int, int> > q;
  q.push(pair<int, int>(2, 2));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int px = p.first + fx[i], py = p.second + fy[i];
      if(px >= 0 && px < 5 && py >= 0 && py < 5 && vis[py][px] == false){
        vis[py][px] = true;
        len[py][px] = len[p.second][p.first] + 1;
        q.push(pair<int, int>(px, py));
      }
    }
  }
  return len[a][b];
}
int main(){
  //freopen("input.txt", "r", stdin);
  int x, a, b;
  for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++){
    scanf("%d", &x);
    if(x == 1){
      a = i;
      b = j;
    }
  }
  printf("%d\n", bfs(a, b));
  return 0;
}