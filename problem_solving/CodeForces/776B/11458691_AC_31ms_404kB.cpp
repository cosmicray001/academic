#include <bits/stdc++.h>
#define le 100010

using namespace std;
int n[le];

void se()
{
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

int main()
{
  se();
  int len;
  scanf("%d", &len);
  if(len <= 2) printf("1\n");
  else printf("2\n");
  int i;
  for(i = 2; i <= len; i++){
    printf("%d ", n[i] ? 2 : 1);
  }
  printf("%d\n", n[i] ? 2 : 1);
  return 0;
}