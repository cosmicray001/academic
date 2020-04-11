#include <bits/stdc++.h>
using namespace std;
map<string, string> mp;
int main(){
  //freopen("input.txt", "r", stdin);
  mp["HELLO"] = "ENGLISH";
  mp["HOLA"] = "SPANISH";
  mp["HALLO"] = "GERMAN";
  mp["BONJOUR"] = "FRENCH";
  mp["CIAO"] = "ITALIAN";
  mp["ZDRAVSTVUJTE"] = "RUSSIAN";
  string s;
  int co = 0;
  while(cin >> s && s != "#") cout << "Case " << ++co << ": " << ((mp[s] != "") ? mp[s] : "UNKNOWN" )<< endl;
  return 0;
}
