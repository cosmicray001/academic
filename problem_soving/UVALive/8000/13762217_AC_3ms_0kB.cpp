#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, a, b, c;
  for(scanf("%d", &t); t--; ){
    scanf("%d %d %d", &a, &b, &c);
    for(int i = 1; i <= c; i++){
      bool f = 0, f1 = 0;
      if(i % a == 0) f = 1;
      if(i % b == 0) f1 = 1;
      if(f && f1) printf("FizzBuzz\n");
      else if(f) printf("Fizz\n");
      else if(f1) printf("Buzz\n");
      else printf("%d\n", i);
    }
  }
  return 0;
}
