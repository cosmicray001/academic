#include <bits/stdc++.h>

using namespace std;

int fnc(int a, int b){
  int sum = 0;
  if(b + 2 >= 1 && b + 2 <= 8){
    if(a + 1 >= 1 && a + 1 <= 8) sum++;
    if(a - 1 >= 1 && a - 1 <= 8) sum++;
  }
  if(b - 2 >= 1 && b - 2 <= 8){
    if(a + 1 >= 1 && a + 1 <= 8) sum++;
    if(a - 1 >= 1 && a - 1 <= 8) sum++;
  }
  
  return sum;
}

int main()
{
  int t;
  int a, b, sum;
  char ch[4];
  scanf("%d", &t);
  while(t--){
    sum = 0;
    scanf("%s", ch);
    a = ch[0] - 'a' + 1;
    b = ch[1] - '0';
    sum = fnc(a, b);
    sum += fnc(b, a);
    printf("%d\n", sum);
  }
  
  return 0;
}