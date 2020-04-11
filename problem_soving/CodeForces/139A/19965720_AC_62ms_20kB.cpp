#include <bits/stdc++.h>
using namespace std;
int n[8];
int main(){
  int a, sum = 0;
  cin >> a;
  for(int i = 0; i < 7; scanf("%d", &n[i]), i++);
  while(true){
    for(int i = 0; i < 7; i++){
      sum += n[i];
      if(sum >= a){
        printf("%d\n", i + 1);
        return 0;
      }
    }
  }
  return 0;
}
