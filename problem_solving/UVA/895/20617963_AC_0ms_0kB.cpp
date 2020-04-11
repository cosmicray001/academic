#include <bits/stdc++.h>
using namespace std;
vector<string> v;
bool fnc(string s, int a){
  int n[130];
  for(int i = 0; i < 130; n[i] = 0, i++);
  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z') n[s[i]]++;
  }
  for(int i = 0; i < v[a].size(); i++){
    int x = v[a][i];
    if(n[x] == 0) return false;
    n[x]--;
  }
  return true;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  while(cin >> s && s != "#") v.push_back(s);
  getchar();
  while(getline(cin, s) && s != "#"){
    int co = 0;
    for(int i = 0;i < v.size(); i++) if(fnc(s, i)) co++;
    printf("%d\n", co);
  }
  return 0;
}
