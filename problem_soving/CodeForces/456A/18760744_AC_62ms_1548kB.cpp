#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int> > v;
int main(){
  //freopen("input.txt", "r", stdin);
  int len, a, b;
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    scanf("%d %d", &a, &b);
    v.push_back(make_pair(a, b));
  }
  sort(v.begin(), v.end());
  bool f = false;
  for(int i = 0; i < len - 1; i++){
    if(v[i].second > v[i + 1].second){
      f = true;
      break;
    }
  }
  printf("%s\n", f ? "Happy Alex" : "Poor Alex");
  return 0;
}
