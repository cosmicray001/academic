#include <bits/stdc++.h>
#define le 10004
using namespace std;
int p[le];
struct edge{
  int x, y;
  double cost;
};
bool comp(edge a, edge b){
  return a.cost < b.cost;
}
int fnc(int a){
  if(p[a] == a) return a;
  p[a] = fnc(p[a]);
  return p[a];
}
double dis(double a, double b, double x, double y){
  a = (a - x) * (a - x);
  b = (b - y) * (b - y);
  return sqrt(a + b);
}
int main(){
  int t, n, co = 0;
  double a, b;
  for(scanf("%d", &t); t--; ){
    if(co) printf("\n");
    scanf("%d", &n);
    vector<pair<double, double> > h;
    edge arr[le];
    for(int i = 0; i < n; i++){
      p[i] = i;
      scanf("%lf %lf", &a, &b);
      h.push_back(make_pair(a, b));
    }
    int l = 0;
    for(int i = 0; i < n - 1; i++){
      for(int j = i + 1; j < n; j++){
        if(i != j){
          arr[l].x = i;
          arr[l].y = j;
          arr[l].cost = dis(h[i].first, h[i].second, h[j].first, h[j].second);
          l++;
        }
      }
    }
    sort(arr, arr + l, comp);
    double sum = 0.0;
    for(int i = 0; i < l; i++){
      int a1 = fnc(arr[i].x);
      int a2 = fnc(arr[i].y);
      if(a1 != a2){
        p[a2] = a1;
        sum += arr[i].cost;
      }
    }
    printf("%.2lf\n", sum);
    co++;
  }
  return 0;
}