#include <bits/stdc++.h>

using namespace std;

int fnc(string s, string ss, int len){
  int c = 0;
  for(int i = 0; i < len; i++){
    int a = s[i] - '0', b = ss[i] - '0';
    int x = abs(a - b);
    if(x > 5) c += (10 - x);
    else c += x;
  }
  return c;
}

int main()
{
  string s, ss;
  int t, c = 0;
  scanf("%d", &t);
  int len;
  while(t--){
    scanf("%d", &len);
    cin >> s >> ss;
    int ans = fnc(s, ss, len);
    printf("Case %d: %d\n", ++c, ans);
  }
  
  return 0;
}