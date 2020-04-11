#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b, n;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &n);
    vector<pair<int, int> > v;
    vector<pair<int, int> > ve;
    for(int i = 0; i < n; scanf("%d %d", &a, &b), v.push_back(make_pair(a, b)), ve.push_back(make_pair(a, b)), i++);
    sort(ve.begin(), ve.end());
    int minn = ve[0].first, maxx = ve[0].second;
    vector<pair<int, int> > st;
    for(int i = 1; i < n; i++){
      a = ve[i].first;
      b = ve[i].second;
      if(a >= minn && a <= maxx) maxx = max(maxx, b);
      else{
        st.push_back(make_pair(minn, maxx));
        break;
      }
    }
    if(!st.size()) printf("-1\n");
    else{
      for(int i = 0; i < n; i++){
        if(i) printf(" ");
        if(v[i].first >= st[0].first && v[i].second <= st[0].second) printf("1");
        else printf("2");
      }
      printf("\n");
    }
  }
  return 0;
}
