#include <bits/stdc++.h>
using namespace std;
pair<double, int> mp[1003];
bool comp(pair<double, int> a, pair<double, int> b){
  return a.first > b.first;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, t1, t2;
  double k;
  scanf("%d %d %d %lf", &len, &t1, &t2, &k);
  k = (100.0 - k) / 100.0;
  for(int i = 0, j = 1; i < len; i++, j++){
      double a, b, x, y, z;
      scanf("%lf %lf", &a, &b);
      x = (a * t1) * k + (b * t2);
      y = (b * t1) * k + (a * t2);
      //printf("%lf %lf\n", k, y);
      mp[i] = make_pair(-max(x, y), j);
  }
  sort(mp, mp + len);
  for(int i = 0; i < len; i++){
    printf("%d %.2lf\n", mp[i].second, -mp[i].first);
  }
  return 0;
}

