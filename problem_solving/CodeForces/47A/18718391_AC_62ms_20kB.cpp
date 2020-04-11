#include <bits/stdc++.h>
using namespace std;
int a;
bool fnc(int i){
  return ((i * (i + 1) / 2) == a);
}
int main(){
  scanf("%d", &a);
  bool f = false;
  for(int i = 1; (i * (i + 1)) <= 2 * a; i++){
    if(fnc(i)){
      f = true;
      break;
    }
  }
  printf("%s\n", f ? "YES" : "NO");
  return 0;
}
