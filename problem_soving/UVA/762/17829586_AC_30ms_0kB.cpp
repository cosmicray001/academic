#include <bits/stdc++.h>
using namespace std;
map<string, string> pa;
void pri(string s){
  if(pa[s] == "1") return;
  else pri(pa[s]);
  cout << pa[s] << " " << s << endl;
}
int main(){
  
  int n, co = 0;
  while(scanf("%d", &n) != EOF){
    if(co++) printf("\n");
    map<string, vector<string> > mp;
    map<string, bool> vis;
    string s, s1;
    int l = 0;
    for(int i = 0; i < n; i++){
      cin >> s >> s1;
      mp[s].push_back(s1);
      mp[s1].push_back(s);
      if(!vis[s]){
        l++;
        vis[s] = true;
      }
      if(!vis[s1]){
        l++;
        vis[s1] = true;
      }
    }
    cin >> s >> s1;
    if(!vis[s] || !vis[s1]){
      printf("No route\n");
      continue;
    }
    vis[s] = false;
    pa[s] = "1";
    queue<string> q;
    q.push(s);
    while(!q.empty()){
      s = q.front();
      q.pop();
      for(int i = 0; i < mp[s].size(); i++){
        string ch = mp[s][i];
        if(vis[ch]){
          vis[ch] = false;
          pa[ch] = s;
          q.push(ch);
        }
      }
    }
    if(!vis[s1]) pri(s1);
    else printf("No route\n");
    pa.clear();
  }
  return 0;
}
