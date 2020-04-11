#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  int t;
  ll a, b;
  for(scanf("%d", &t); t--; ){
    cin >> a >> b;
    printf("%s\n", (a == b) ? "=" : (a < b) ? "<" : ">");
  }
  return 0;
}
