#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;
  char ch[7];
  int t;
  scanf("%d", &t);
  while(t--){
    scanf("%s", ch);
    a = ((ch[0] - '0') * 10) + (ch[1] - '0');
    b = ((ch[3] - '0') * 10) + (ch[4] - '0');
    if(b) b = 60 - b;
    if(b) a = 11 - a;
    else a = 12 - a;
    a = (a + 12) % 12;
    if(!a) a = 12;
    printf("%02d:%02d\n", a, b);
  }
  return 0;
}