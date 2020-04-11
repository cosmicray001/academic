#include <bits/stdc++.h>

using namespace std;

int fnc(int n){
  int ans = 0;
  bool f = 1;
  while(f){
    ans = 0;
    for(; n > 0; n /= 10){
      ans += (n % 10);
    }
    if(ans > 9) n = ans;
    else f = 0;
  }
  return ans;
}

int main()
{
  string s, s1;
  int sum, sum1;
  while(getline(cin, s) && getline(cin, s1)){
    sum = sum1 = 0;
    int len = s.size(), len1 = s1.size();
    for(int i = 0; i < len; i++){
      if(s[i] >= 'a' && s[i] <= 'z') sum += (s[i] - 'a' + 1);
      else if(s[i] >= 'A' && s[i] <= 'Z') sum += (s[i] - 'A' + 1);
    }
    for(int i = 0; i < len1; i++){
      if(s1[i] >= 'a' && s1[i] <= 'z') sum1 += (s1[i] - 'a' + 1);
      else if(s1[i] >= 'A' && s1[i] <= 'Z') sum1 += (s1[i] - 'A' + 1);
    }
    double sum11 = fnc(sum);
    double sum22 = fnc(sum1);
    if(sum11 >= sum22) printf("%0.2lf %%\n", (sum22 * 100.00) / sum11);
    else printf("%0.2lf %%\n", (sum11 * 100.0) / sum22);
  }
}