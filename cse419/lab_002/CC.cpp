#include <bits/stdc++.h>
#define le 1003
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, a;
  while(scanf("%d", &t) != EOF && t){
    if(co++) printf("\n");
    printf("Scenario #%d\n", co);
    queue<int> q[le];
    queue<int> qq;
    map<int, int> mp;
    for(int i = 0; i < t; i++){
      scanf("%d", &len);
      for(int j = 0; j < len; j++){
        scanf("%d", &a);
        mp[a] = i;
      }
    }
    string s;
    while(cin >> s && s != "STOP"){
      if(s == "ENQUEUE"){
        scanf("%d", &a);
        int id = mp[a];
        if(q[id].empty()) qq.push(id);
        q[id].push(a);
      }
      else{
        a = qq.front();
        int b = q[a].front();
        q[a].pop();
        if(q[a].empty()) qq.pop();
        printf("%d\n", b);
      }
    }
  }
  printf("\n");
  return 0;
}
