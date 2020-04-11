#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
  while(true){
    int ans = 0;
    for(; a > 0; a /= 10) ans += a % 10;
    if(ans > 9) a = ans;
    else return ans;
  }
  return 0;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string a, b;
  while(getline(cin, a), getline(cin, b)){
    int sum = 0, sum1 = 0;
    for(int i = 0; i < a.size(); i++){
      if(a[i] >= 'a' && a[i] <= 'z') a[i] = a[i] - 'a' + 'A';
      if(a[i] >= 'A' && a[i] <= 'Z') sum += (a[i] - 'A' + 1);
    }
    for(int i = 0; i < b.size(); i++){
      if(b[i] >= 'a' && a[i] <= 'z') b[i] = b[i] - 'a' + 'A';
      if(b[i] >= 'A' && b[i] <= 'Z')sum1 += (b[i] - 'A' + 1);
    }
    int aa = fnc(sum), bb = fnc(sum1);
    if(aa >= bb) printf("%.2lf %%\n", (bb * 100.0) / aa);
    else printf("%.2lf %%\n", (aa * 100.0) / bb);
  }
  return 0;
}
