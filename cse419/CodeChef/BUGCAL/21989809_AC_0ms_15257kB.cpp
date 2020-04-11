#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  string a, b;
  for(scanf("%d", &t); t--; ){
    cin >> a >> b;
    string c= "";
    while(a.size() < b.size()) a = "0" + a;
    while(a.size() > b.size()) b = "0" + b;
    for(int i = 0; i < a.size(); i++){
      int ve = a[i] + b[i] - '0' - '0';
      ve = ve % 10;
      c += (ve + '0');
    }
    stringstream ss(c);
    int ans;
    ss >> ans;
    cout << ans << endl;
  }
  return 0;
}
