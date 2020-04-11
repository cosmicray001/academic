#include <bits/stdc++.h>
#define le 3010

using namespace std;
bool n[le];

void sv(){
  for(int i = 4; i < le; i += 2) n[i] = 1;
  int rt = sqrt(le);
  for(int i = 3; i <= rt; i += 2){
    if(!n[i]){
      for(int j = i * i; j < le; j += i){
        n[j] = 1;
      }
    }
  }
}

bool fnc(int x){
  int co = 0;
  for(int i = 2; i < x; i++){
    if(!n[i] && x % i == 0){
      co++;
      if(co == 3) break;
    }
  }
  if(co == 2) return 1;
  else return 0;
}

int main()
{
  sv();
  int t;
  scanf("%d", &t);
  int c = 0;
  for(int i = 1; i <= t; i++){
    if(n[i]){
      bool f = fnc(i);
      if(f) c++;
    }
  }
  printf("%d\n", c);
  
  return 0;
}