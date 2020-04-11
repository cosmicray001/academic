#include <bits/stdc++.h>
#define le 20000110

using namespace std;
bool n[le];
int m[le];

void se(){
  memset(n, 0, le);
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

void twin(){
  int po = 1;
  for(int i = 2; i < le; i++){
    if(!n[i] && !n[i + 2]){
      m[po] = i;
      po++;
    }
  }
}

int main()
{
  se();
  twin();
  int t;
  while(scanf("%d", &t) != EOF){
    int i = m[t];
    printf("(%d, %d)\n", i, i + 2);
  }
  
  return 0;
}