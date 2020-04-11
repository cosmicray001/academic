#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];
struct eg{
  int sum, maxx, minn;
};
eg arr[4 * le];
eg com(eg a, eg b){
  eg temp;
  temp.sum = a.sum + b.sum;
  temp.maxx = max(a.maxx, b.maxx);
  temp.minn = min(a.minn, b.minn);
  return temp;
}
void init(int nd, int b, int e){
  if(b == e){
    arr[nd].sum = n[b];
    arr[nd].maxx = n[b];
    arr[nd].minn = n[b];
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  init(l, b, m);
  init(r, m + 1, e);
  arr[nd] = com(arr[l], arr[r]);
}
eg query(int nd, int b, int e, int i, int j){
  if(b > j || e < i){
    eg temp;
    temp.sum = 0;
    temp.maxx = -INT_MAX;
    temp.minn = INT_MAX;
    return temp;
  }
  if(b >= i && e <= j) return arr[nd];
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  return com(query(l, b, m, i, j), query(r, m + 1, e, i, j));
}
void update(int nd, int b, int e, int i, int v){
  if(b > i || e < i) return;
  if(b >= i && e <= i){
    arr[nd].sum = v;
    arr[nd].maxx = v;
    arr[nd].minn = v;
    return;
  }
  int l = nd << 1, r = l | 1, m = (b + e) >> 1;
  update(l, b, m, i, v);
  update(r, m + 1, e, i, v);
  arr[nd] = com(arr[l], arr[r]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  int len, q, a, b, c;
  scanf("%d %d", &len, &q);
  for(int i = 0; i < len; scanf("%d", &n[i]), i++);
  init(1, 0, len - 1);
  while(q--){
    scanf("%d %d %d", &c, &a, &b);
    if(c == 1){
      eg temp = query(1, 0, len - 1, a - 1, b - 1);
      int ve = temp.sum - temp.maxx - temp.minn;
      printf("%d\n", ve);
    }
    else update(1, 0, len - 1, a - 1, b);
  }
  return 0;
}
