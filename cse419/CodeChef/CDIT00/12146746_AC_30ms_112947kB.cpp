#include <bits/stdc++.h>
#define le 100000000

using namespace std;
bool n[le];

bool fnc(){
  memset(n, 0, le);
  for(int i = 7; i < le; i += 7) n[i] = 1;
}

int main()
{
  int t, len, c;
  scanf("%d", &t);
  fnc();
  while(t--){
    int co = 0;
    scanf("%d", &len);
    while(len--){
      scanf("%d", &c);
      if(n[c]) co++;
    }
    printf("%d\n", co);
  }
  
  return 0;
}