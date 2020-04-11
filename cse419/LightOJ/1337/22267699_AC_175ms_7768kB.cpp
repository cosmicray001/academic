#include <bits/stdc++.h>
#define le 505
using namespace std;
char n[le][le];
int dis[le][le];
bool vis[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
void bfs(int a, int b, int r, int c){
  vis[a][b] = true;
  int ans = 0;
  if(n[a][b] == 'C') ans++;
  vector<pair<int, int> > pp;
  pp.push_back(make_pair(a, b));
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] != '#'){
        vis[py][px] = true;
        pp.push_back(make_pair(py, px));
        if(n[py][px] == 'C') ans++;
        q.push(make_pair(py, px));
      }
    }
  }
  for(int i = 0; i < pp.size(); i++){
    int py = pp[i].first, px = pp[i].second;
    dis[py][px] = ans;
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int t, co = 0, r, c, a, b, q;
  string s;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d %d", &r, &c, &q);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
      }
    }
    memset(vis, false, sizeof(vis));
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
        if(n[i][j] != '#' && !vis[i][j]) bfs(i, j, r, c);
      }
    }
    printf("Case %d:\n", ++co);
    while(q--){
      scanf("%d %d", &a, &b);
      printf("%d\n", dis[a - 1][b - 1]);
    }
  }
  return 0;
}
