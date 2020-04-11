#include <bits/stdc++.h>
#define maxx 0
#define minm 1000010
using namespace std;
 
int main(){
  int t, co = 0, len;
  char ch[110], s[110], s1[110];
  for(scanf("%d", &t); t--; ){
    int ma = maxx, mi = minm, x, a, b, c;
    for(scanf("%d", &len); len--; ){
      scanf("%s", ch);
      scanf("%d %d %d", &a, &b, &c);
      x = a * b *c;
      if(ma < x){
        ma = x;
        strcpy(s, ch);
      }
      if(mi > x){
        mi = x;
        strcpy(s1, ch);
      }
    }
    printf("Case %d: ", ++co);;
    if(ma == mi) printf("no thief\n");
    else printf("%s took chocolate from %s\n", s, s1);
  }
  return 0;
}