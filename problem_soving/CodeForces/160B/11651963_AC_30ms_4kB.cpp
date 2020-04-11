#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  int len;
  scanf("%d", &len);
  getline(cin, s);
  getline(cin, s);
  int a[110], b[110];
  for(int i = 0; i < len; i++) a[i] = s[i] - '0';
  int j = 0;
  for(int i = len; i < 2 * len; i++, j++) b[j] = s[i] - '0';
  sort(a, a + len);
  sort(b, b + len);
  bool f = 1, g = 1, k = 1;
  for(int i = 0; i < len; i++){
    if(a[i] > b[i] && g) f = 0;
    else if(a[i] < b[i] && f) g = 0;
    else{
      k = 0;
      break;
    }
  }
  if(k) printf("YES\n");
  else printf("NO\n");
  
  return 0;
  
}