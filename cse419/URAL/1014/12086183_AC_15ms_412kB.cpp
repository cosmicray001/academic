#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector <int> v;
  long long int a;
  scanf("%lld", &a);
  if(a == 0) printf("10\n");
  else if(a < 10) printf("%lld\n", a);
  else{
    for(int i = 9; i >= 2; i--){
      while(a % i == 0){
        v.push_back(i);
        a /= i;
      }
    }
    if(a > 1) printf("-1\n");
    else{
      sort(v.begin(), v.end());
      for(int i = 0; i < v.size(); i++) printf("%d", v[i]);
      printf("\n");
    }
  }
  
  return 0;
}