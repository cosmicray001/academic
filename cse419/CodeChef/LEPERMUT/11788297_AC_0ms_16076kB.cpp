#include <bits/stdc++.h>
#define le 110

using namespace std;
int n[le];

int main()
{
  int t, len;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &len);
    for(int i = 0; i < len; i++) scanf("%d", &n[i]);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < len; i++){
      for(int j = i + 1; j < len; j++){
        if(n[i] > n[j]) sum1++;
      }
    }
    
    for(int i = 0; i < len - 1; i++){
      if(n[i] > n[i + 1]) sum2++;
    }
    printf("%s\n", sum1 == sum2 ? "YES" : "NO");
  }
  
  return 0;
}