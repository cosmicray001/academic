#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, len, a;
  for(scanf("%d", &t); t--; ){
    map<int, int> mp;
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
      scanf("%d", &a);
      mp[a]++;
    }
    int x, y = -1;
    for(map<int, int> :: iterator it = mp.begin(); it != mp.end(); it++){
      if((*it).second > y){
        y = (*it).second;
        x = (*it).first;
      }
    }
    cout << x << " " << y << endl;
    //mp.clear();
  }
  return 0;
}
