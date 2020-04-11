#include <bits/stdc++.h>
using namespace std;
int main(){
  int n[4];
  while(scanf("%d %d %d", &n[0], &n[1], &n[2]) != EOF && (n[0] || n[1] || n[2])){
    sort(n, n + 3);
    if((n[0] * n[0]) + (n[1] * n[1]) == (n[2] * n[2])) printf("right\n");
    else printf("wrong\n");
  }
  return 0;
}
