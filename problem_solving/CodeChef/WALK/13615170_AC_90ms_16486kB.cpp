#include <bits/stdc++.h>
#define le 100006
 
using namespace std;
int maxx = 0;
int n[le];
int main(){
    int t, len;
    for(scanf("%d", &t); t--; ){
      maxx = 0;
      int ma = 0, index = -1;
      scanf("%d", &len);
      for(int i = 0; i < len; i++){
        scanf("%d", &n[i]);
        maxx--;
        if(maxx < n[i]){
          ma = n[i];
          maxx = ma;
          index = i;
        }
      }
      printf("%d\n", ma + index);
    }
    return 0;
}