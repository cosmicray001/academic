#include <bits/stdc++.h>
#define le 500005
using namespace std;
int p[1003];
struct edge{
  int x, y;
  double cost;
};
bool comp(edge a, edge b){
  return (a.cost - b.cost < 1e-9);
}
double dis(double a, double b, double x, double y){
  a = (a - x) * (a - x);
  b = (b - y) * (b - y);
  return sqrt(a + b);
}
int fnc(int a){
  if(p[a] == a) return a;
  p[a] = fnc(p[a]);
  return p[a];
}
int main(){
  int t, co = 0, n;
  double a, b, r;
  for(scanf("%d", &t); t--; ){
    vector<pair<double, double> > h;
    scanf("%d %lf", &n, &r);
    for(int i = 0; i < n; i++){
      p[i] = i;
      scanf("%lf %lf", &a, &b);
      h.push_back(make_pair(a, b));
    }
    edge arr[le];
    int l = 0;
    for(int i = 0; i < n - 1; i++){
      for(int j = i + 1; j < n; j++){
        double d = dis(h[i].first, h[i].second, h[j].first, h[j].second);
        arr[l].x = i;
        arr[l].y = j;
        arr[l].cost = d;
        l++;
      }
    }
    sort(arr, arr + l, comp);
    int st = n;
    double bus = 0, tr = 0;
    for(int i = 0; i < l; i++){
      int ii = fnc(arr[i].x);
      int ll = fnc(arr[i].y);
      if(ii != ll){
        if(arr[i].cost - r <= 1e-9){
          st--;
          bus += arr[i].cost;
        }
        else tr += arr[i].cost;
        p[ll] = ii;
      }
    }
    printf("Case #%d: %d %.0lf %.0lf\n", ++co, st, floor(bus + 0.5) ,floor(tr + 0.5));
  }
  return 0;
}