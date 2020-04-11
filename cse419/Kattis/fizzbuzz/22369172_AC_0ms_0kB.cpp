#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  while(scanf("%d %d %d", &a, &b, &c) != EOF){
    for(int i = 1; i < c + 1; i++){
      if(i % a == 0 && i % b == 0) printf("FizzBuzz\n");
      else if(i % a == 0) printf("Fizz\n");
      else if(i % b == 0) printf("Buzz\n");
      else printf("%d\n", i);
    }
  }
  return 0;
}
