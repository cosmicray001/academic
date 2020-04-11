#include <bits/stdc++.h>
using namespace std;
vector<long long int> v;
int main(){
  //freopen("input.txt", "r", stdin);
  long long int ans = 0, c, a;
  for(int i = 0; i < 3; scanf("%lld", &a), v.push_back(a), i++);
  sort(v.begin(), v.end());
  if(v[0] == v[1] && v[0] == 0){
    printf("0\n");
    return 0;
  }
  else if(v[0] == 0 && v[1] != 0){
      if(v[1] * 2 <= v[2]){
        printf("%d\n", v[1]);
        return 0;
      }
      else{
        printf("%d\n", (v[1] + v[2]) / 3);
        return 0;
      }
  }
  else if(v[0]){
    if((v[0] + v[1]) * 2 <= v[2]){
      printf("%d\n", v[0] + v[1]);
      return 0;
    }
    else{
      printf("%d\n", (v[0] + v[1] + v[2]) / 3);
      return 0;
    }
  }
  return 0;
}
