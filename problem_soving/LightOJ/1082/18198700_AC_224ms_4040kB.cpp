#include <bits/stdc++.h>
#define li 100005
#define le 400005
using namespace std;
int arr[le], n[li];
void init(int nd, int b, int e){
  if(b == e){
    arr[nd] = n[e];
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd] = min(arr[l], arr[r]);
  return;
}
int query(int nd, int b, int e, int i, int j){
  if(b > j || e < i) return INT_MAX;
  if(b >= i && e <= j) return arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  int v1 = query(l, b, m, i, j);
  int v2 = query(r, m + 1, e, i, j);
  return min(v1, v2);
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, co = 0, len, q, a, b;
  for(scanf("%d", &t); t--; ){
    memset(arr, 0, sizeof(arr));
    scanf("%d %d", &len, &q);
    for(int i = 1; i < len + 1; scanf("%d", &n[i]), i++);
    init(1, 1, len);
    printf("Case %d:\n", ++co);
    while(q--){
      scanf("%d %d", &a, &b);
      printf("%d\n", query(1, 1, len, a, b));
    }
  }
  return 0;
}