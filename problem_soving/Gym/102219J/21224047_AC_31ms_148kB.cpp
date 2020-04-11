#include <bits/stdc++.h>
#define le 71
using namespace std;
vector<int> ans;
vector<int> v[le];
int in[le];
void bfs(){
  queue<int> q;
  for(int i = 'A'; i < 'E' + 1; i++) if(in[i] == 0) q.push(i);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      in[e]--;
      if(in[e] == 0) q.push(e);
    }
    ans.push_back(p);
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  char a, c, b;
  for(int i = 0; i < 5; i++){
    cin >> a >> c >> b;
    if(c == '>'){
      v[b].push_back(a);
      in[a]++;
    }
    else{
      v[a].push_back(b);
      in[b]++;
    }
  }
  bfs();
  if(ans.size() != 5) printf("impossible\n");
  else{
    for(int i = 0; i < ans.size(); i++) printf("%c", ans[i]);
    printf("\n");
  }
  return 0;
}
