#include <bits/stdc++.h>
#define max_len 100010

using namespace std;
int n[max_len];

bool fnc(int a[], int len)
{
  if(len == 1) return 1;
  else if(len == 2) return 0;
  else{
    long long int c1 = 0, c2 = 0;
    for(int i = 0; i < len - 1; i++) c1 += a[i];
    bool f = false;
    for(int i = len - 1; i > 0; i--){
      c1 -= a[i - 1];
      c2 += a[i];
      if(c1 == c2){
        f = true;
        break;
      }
    }
    return f;
  }
}

int main()
{
  int t, len;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &len);
    for(int i = 0; i < len; i++) scanf("%d", &n[i]);
    bool ans = fnc(n, len);
    printf("%s\n", ans ? "YES" : "NO");
  }
  
  return 0;
}