#include <bits/stdc++.h>
#define le 52
using namespace std;
vector<pair<int, int> > v;
char n[le][le];
bool vis[le][le];
int fx[] = {1, -1, 0, 0}, fy[] = {0, 0, 1, -1};
void bfs(int a, int b, int r, int c){
  vis[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i], px =p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && (n[py][px] == 'L' || n[py][px] == 'C')){
        vis[py][px] = true;
        q.push(make_pair(py, px));
      }
    }
  }
}
int main(){
  int r, c;
  string s;
  scanf("%d %d", &r, &c);
  for(int i = 0; i < r; i++){
    cin >> s;
    for(int j = 0; j < c; j++){
      n[i][j] = s[j];
      if(s[j] == 'L') v.push_back(make_pair(i, j));
    }
  }
  
  int co = 0;
  for(int i = 0; i < v.size(); i++){
    int py = v[i].first, px = v[i].second;
    if(!vis[py][px]){
      bfs(py, px, r, c);
      co++;
    }
  }
  printf("%d\n", co);
  return 0;
}
