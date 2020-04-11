#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t, co = 0;
  long long b;
  char ch[220];
  for(scanf("%d", &t); t--; ){
    scanf("%s %lld", ch, &b);
    b = abs(b);
    int len = strlen(ch);
    long long re = 0;
    for(int i = 0; i < len; i++){
      if(ch[i] >= '0' && ch[i] <= '9'){
        re = (re * 10) + (ch[i] - '0');
        re %= b;
      }
    }
    printf("Case %d: %s\n", ++co, (!re) ? "divisible" : "not divisible");
  }
  return 0;
}