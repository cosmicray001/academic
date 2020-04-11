#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le];
bool fnc(int i, int key, int len){
  int lo = i + 1, hi = len - 1, mid;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    if(n[mid] == key) return true;
    else if(n[mid] < key) lo = mid + 1;
    else hi = mid - 1;
  }
  return false;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len, a, m, co = 0;
  while(scanf("%d", &len) != EOF){
    if(co++) printf("\n");
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    sort(n, n + len);
    scanf("%d", &m);
    int a = 0, b = 0, mn = INT_MAX;
    for(int i = 0; i < len && n[i] <= m; i++){
      if(fnc(i, m - n[i], len)){
        if((m - 2 * n[i]) < mn){
          b = m - n[i];
          a = n[i];
        }
      }
    }
    printf("Peter should buy books whose prices are %d and %d.\n", a, b);
  }
  printf("\n");
  return 0;
}
