#include <bits/stdc++.h>
#define le 52
using namespace std;
char n[le][le];
bool vis[le][le], ck[le][le];
map<int, bool> mp;
int ve[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
vector<pair<int, int> > v;
vector<int> ct;
void bfs1(int a, int b, int r, int c, int x){
  ve[a][b] = x;
  ck[a][b] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i];
      int px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && ck[py][px] == false && n[py][px] == 'X'){
        ck[py][px] = true;
        ve[py][px] = x;
        q.push(make_pair(py, px));
      }
    }
  }
}
bool fnc(int a, int b, int r, int c){
  for(int i = 0; i < 4; i++){
    int py = fy[i] + a;
    int px = fx[i] + b;
    if(py >= 0 && py < r && px >= 0 && px < c && n[py][px] == 'X' && mp[ve[py][px]] == true) return false;
  }
  mp[ve[a][b]] = true;
  return true;
}
void bfs(int a, int b, int r, int c){
  vis[a][b] = true;
  int co = 1;
  mp[ve[a][b]] = true;
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    pair<int, int> p = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int py = p.first + fy[i];
      int px = p.second + fx[i];
      if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && (n[py][px] == 'X' || n[py][px] == '*')){
        vis[py][px] = true;
        if(n[py][px] == 'X'){
          if(fnc(py, px, r, c)) co++;
        }
        q.push(make_pair(py, px));
      }
    }
  }
  ct.push_back(co);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  int r, c, co = 0;
  while(scanf("%d %d", &c, &r) != EOF && r && c){
    for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, ck[i][j] = false, ve[i][j] = -1, j++);
    for(int i = 0; i < r; i++){
      cin >> s;
      for(int j = 0; j < c; j++){
        n[i][j] = s[j];
        if(s[j] == 'X') v.push_back(make_pair(i, j));
      }
    }
    for(int i = 0; i < v.size(); i++){
      int py = v[i].first;
      int px = v[i].second;
      if(ck[py][px] == false) bfs1(py, px, r, c, i);
    }
    for(int i = 0; i < v.size(); i++){
      int py = v[i].first;
      int px = v[i].second;
      if(vis[py][px] == false) bfs(py, px, r, c);
    }
    sort(ct.begin(), ct.end());
    printf("Throw %d\n", ++co);
    for(int i = 0; i < ct.size() - 1; i++) printf("%d ", ct[i]);
    printf("%d\n\n", ct[ct.size() - 1]);
    mp.clear();
    ct.clear();
    v.clear();
  }
  return 0;
}
