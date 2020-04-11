#include <bits/stdc++.h>

using namespace std;
int po[10010];

int main()
{
  int t;
  int len, n[1010];
  scanf("%d", &t);
  while(t--){
    memset(po, 0, 10010);
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
      scanf("%d", &n[i]);
      po[n[i]]++;
    }
    sort(n, n + len);
    //for(int i = 0; i < len; i++) printf("%d\n", po[i]);
    int a = 0, b = 0;
    for(int i = len - 1; i >= 0; i--){
      if(po[n[i]] >= 2){
        a = n[i];
        po[n[i]] -= 2;
        break;
      }
    }
    //for(int i = 0; i < len; i++) printf("%d\n", po[i]);
    for(int i = len - 1; i >= 0; i--){
      if(po[n[i]] >= 2){
        b = n[i];
        po[n[i]] -= 2;
        break;
      }
    }
    if(a && b) printf("%d\n", a * b);
    else printf("-1\n");
  }
  
  return 0;
}