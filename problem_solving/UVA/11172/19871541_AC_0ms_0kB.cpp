#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, a, b;
  for(scanf("%d", &t); t--; ){
    cin >> a >> b;
    if(a == b) cout << "=" << endl;
    else if(a < b) cout << "<" << endl;
    else cout << ">" << endl;
  }
  return 0;
}
