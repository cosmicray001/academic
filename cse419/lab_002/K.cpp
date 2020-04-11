#include <bits/stdc++.h>
#define le 22
using namespace std;
bool vis[le][le];
int dis[le], arr[le];
stack<int> st;
deque<int> de;
bool ok(int m){
  for(int i = 1; i < m + 1; i++) if(arr[i] != 0) return 0;
  return 1;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, a, b, c, n, m;
  for(scanf("%d", &t); t--; ){
    while(!st.empty()) st.pop();
    while(!de.empty()) de.pop_back();
    for(int i = 0; i < le; dis[i] = arr[i] = 0, i++) for(int j = 0; j < le; vis[i][j] = false, j++);
    scanf("%d %d", &n, &m);
    for(int i = 1; i < n + 1; i++) de.push_back(i);
    int ans = 0, len = 0;
    bool f = true;
    for(int i = 1; f; i++){
      a = i % m;
      if(!a) a = m;
      if(arr[a] != 0 && dis[arr[a]] < m) de.push_back(arr[a]);
      arr[a] = 0;
      if(ans == n * m && de.empty()){
        if(ok(m)){
          len = i;
          f = false;
          break;
        }
        else continue;
      }
      while(!de.empty()){
        b = de.front();
        de.pop_front();
        if(!vis[b][a]){
          vis[b][a] = true;
          dis[b]++;
          ans++;
          arr[a] = b;
          while(!st.empty()){
            c = st.top();
            st.pop();
            de.push_front(c);
          }
          break;
        }
        else st.push(b);
      }
      while(!st.empty()){
        int x = st.top();
        st.pop();
        de.push_front(x);
      }
    }
    printf("Case %d: %d\n", ++co, len * 5);
  }
  return 0;
}
