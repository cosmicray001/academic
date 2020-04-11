#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
queue<pair<int, int> > q;
int main(){
  int t, n, p, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d", &n, &p);
    for(int i = 0; i < n; i++){
      scanf("%d", &a);
      q.push(make_pair(a, i));
      pq.push(a);
    }
    int ans = 0;
    while(!q.empty()){
      pair<int, int> b = q.front();
      if(pq.top() == b.first){
        ans++;
        if(p == b.second) break;
        else{
          pq.pop();
          q.pop();
        }
      }else{
        pair<int, int> x = q.front();
        q.pop();
        q.push(x);
      }
    }
    printf("%d\n", ans);
    while(!pq.empty()) pq.pop();
    while(!q.empty()) q.pop();
  }
  return 0;
}
