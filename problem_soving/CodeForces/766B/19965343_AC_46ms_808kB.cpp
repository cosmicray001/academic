#include <bits/stdc++.h>
#define ll long long int
#define le 100005
using namespace std;
ll n[le];
int main(){
  //freopen("input.txt", "r", stdin);
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%lld", &n[i]), i++);
  sort(n, n + len);
  for(int i = 0; i < len - 2; i++){
    for(int j = i + 1; j < len - 1; j++){
      if(n[i] + n[j] > n[j + 1]){
        printf("YES\n");
        return 0;
      }
    }
  }
  printf("NO\n");
  return 0;
}
