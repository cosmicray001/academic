#include <bits/stdc++.h>
#define le 100005
#define ll long long

using namespace std;
ll n[le];
int main(){
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len; i++) scanf("%lld", &n[i]);
  int ans = 2, re = 0;
  if(len <= 2) re = len;
  else{
    for(int i = 2; i < len; i++){
      if(n[i] == n[i - 1] + n[i - 2]){
        ans++;
      }
      else{
        re = max(re, ans);
        ans = 2;
      }
    }
    re = max(re, ans);
  }
  printf("%d\n", re);
  
  return 0;
}