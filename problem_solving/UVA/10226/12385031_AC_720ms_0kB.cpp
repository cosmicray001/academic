# include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  string s;
  scanf("%d", &t);
  getline(cin, s);
  getline(cin, s);
  while(t--){
    map <string, int> mp;
    long long sum = 0;
    while(getline(cin, s)){
      if(s == "") break;
      mp[s]++;
      sum++;
    }
    map<string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
      cout << it -> first;
      printf(" %.4lf\n", (it ->second * 100.0) / (sum * 1.0));
    }
    if(t){
      printf("\n");
      mp.clear();
    }
  }
  
  return 0;
}