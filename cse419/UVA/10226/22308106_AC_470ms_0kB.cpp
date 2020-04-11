#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  int t;
  string s;
  for(scanf("%d", &t), getchar(), getchar(); t--; ){
    int len = 0;
    map<string, int> mp;
    while(getline(cin, s) && s != ""){
      mp[s]++;
      len++;
    }
    for(map<string, int> :: iterator it = mp.begin(); it != mp.end(); it++){
      cout << (*it).first << " ";
      printf("%.4lf\n", ((*it).second * 100.0) / len);
    }
    if(t) printf("\n");
  }
  return 0;
}
