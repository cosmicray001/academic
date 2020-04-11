#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector <int> v;
  int t;
  string s;
  scanf("%d", &t);
  getline(cin, s);
  while(t--){
    getline(cin, s);
    int len = s.size();
    int n = 0;
    for(int i = 0; i < len; i++){
      if(s[i] != ' ') n  = (n * 10) + (s[i] - '0');
      else{
        v.push_back(n);
        n = 0;
      }
    }
    int sum = 0;
    if(s[len - 1] != ' ') v.push_back(n);
    for(int i = 0; i < v.size(); i++){
      for(int j = i + 1; j < v.size(); j++){
        sum = max(sum, (__gcd(v[i], v[j])));
      }
    }
    printf("%d\n", sum);
    v.clear();
  }
  
  return 0;
}