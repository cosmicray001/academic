#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le], r[le];
set<int> st;
vector<pair<int, int> > v;
bool comp(pair<int, int> a, pair<int, int> b){
  if(a.second == b.second) return r[a.first] < r[b.first];
  return a.second > b.second;
}
int main(){
  int len, m, a;
  scanf("%d %d", &len, &m);
  for(int i = 0; i < len; i++){
    scanf("%d", &a);
    n[a]++;
    if(r[a] == 0) r[a] = i + 1;
    st.insert(a);
  }
  for(set<int> :: iterator it = st.begin(); it != st.end(); it++) v.push_back(make_pair((*it), n[(*it)]));
  sort(v.begin(), v.end(), comp);
  bool f = false;
  for(int i = 0; i < v.size(); i++){
    while(v[i].second--){
      if(f) printf(" ");
      printf("%d", v[i].first);
      f = true;
    }
  }
  printf("\n");
  return 0;
}
