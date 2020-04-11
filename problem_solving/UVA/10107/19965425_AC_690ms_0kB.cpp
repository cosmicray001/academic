#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  vector<long long int> v;
  ll a;
  while(scanf("%lld", &a) != EOF){
    v.push_back(a);
    sort(v.begin(), v.end());
    int len = v.size();
    if(len == 1) printf("%lld\n", v[0]);
    else if(len % 2 != 0) printf("%lld\n", v[len / 2]);
    else{
      int x = len / 2;
      int y = x - 1;
      printf("%lld\n", (v[x] + v[y]) / 2);
    }
  }
  return 0;
}