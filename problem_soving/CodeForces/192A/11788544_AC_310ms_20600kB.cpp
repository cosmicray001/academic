#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int n;
  scanf("%d", &n);
  long long int x = n * 2;
  for(int i = 1; i <= n; i++){
    bool f = 0;
    long long int a = i * (i + 1);
    for(int j = 1; j <= n; j++){
      long long int b = j * (j + 1);
      if(x == a + b){
        f = 1;
        break;
      }
      
    }
    if(f == 1) break;
  }
  printf("%s\n", f ? "YES" : "NO");
  
  return 0;
}