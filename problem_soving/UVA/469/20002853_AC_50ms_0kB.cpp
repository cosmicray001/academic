#include <bits/stdc++.h>
#define le 102
using namespace std;
char n[le][le];
bool vis[le][le];
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int bfs(int a, int b, int r, int c){
  for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
  vis[a][b] = true;
  int co = 0;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 8; i++){
      int py = p.first + fy[i], px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] == 'W'){
        vis[py][px] = true;
        co++;
        q.push(make_pair(py, px));
      }
    }
  }
  return co + 1;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, r = 0, c = 0;
  string s;
  cin >> t;
  getchar();
  while(getline(cin, s)){
    if(s == "" || s.size() == 0){
      r = c = 0;
      if(co++) printf("\n");
    }
    else if(s[0] == 'L' || s[0] == 'W'){
      c = s.size();
      for(int i = 0; i < s.size(); i++) n[r][i] = s[i];
      r++;
    }
    else{
      stringstream ss (s);
      int a, b;
      ss >> a >> b;
      printf("%d\n", bfs(a - 1, b - 1, r, c));
    }
  }
  return 0;
}
