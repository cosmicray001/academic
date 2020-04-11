#include <bits/stdc++.h>
#define eps 1e-9
#define le 40004
using namespace std;
int p[le];
struct edge{
  int x, y;
  double cost;
};
bool comp(edge a, edge b){
  return a.cost - b.cost < eps;
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
  int n, co = 0;
  double a, b;
  while(scanf("%d", &n) != EOF && n){
    edge arr[le];
    vector<pair<double, double> > h;
    for(int i = 0; i < n; i++){
      scanf("%lf %lf", &a, &b);
      h.push_back(make_pair(a, b));
      p[i] = i;
    }
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
    double ans = 0;
    for(int i = 0; i < l; i++){
      int ii = fnc(arr[i].x);
      int ll = fnc(arr[i].y);
      if(fnc(0) == fnc(1)) break;
      if(ii != ll){
        ans = arr[i].cost;
        p[ii] = ll;
      }
    }
    printf("Scenario #%d\nFrog Distance = %.3lf\n\n", ++co, ans);
  }
  return 0;
}