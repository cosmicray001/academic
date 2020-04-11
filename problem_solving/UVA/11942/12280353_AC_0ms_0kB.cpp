#include <bits/stdc++.h>

using namespace std;
int n[16];
int m[16];
int main()
{
  int t;
  scanf("%d", &t);
  printf("Lumberjacks:\n");
  while(t--){
    for(int i = 0; i < 10; i++){
      scanf("%d", &n[i]);
      m[i] = n[i];
    }
    bool f = 0, f1 = 0;
    sort(m, m + 10);
    for(int i = 0; i < 10; i++){
      if(n[i] != m[i]){
        f = 0;
        break;
      }else f = 1;
    }
    int j = 9;
    for(int i = 0; i < 10; i++, j--){
      if(n[i] != m[j]){
        f1 = 0;
        break;
      }else f1 = 1;
    }
    if(f || f1) printf("Ordered\n");
    else printf("Unordered\n");
  }
}