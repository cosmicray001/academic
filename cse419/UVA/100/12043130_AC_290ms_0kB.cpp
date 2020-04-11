#include <bits/stdc++.h>

using namespace std;
int fnc1(int a){
  int c = 0;
  while(1){
    if(a == 1) return ++c;
    else if(a % 2 == 0) a /= 2;
    else a = (a * 3) + 1;
    c++;
  }
}


int fnc(int a, int b){
  if(a > b){
    int temp = a;
    a = b;
    b = temp;
  }
  int sum = 0;
  for(int i = a; i <= b; i++){
    int p = fnc1(i);
    sum = max(sum, p);
  }
  return sum;
}

int main()
{
  int a, b, x;
  while(scanf("%d %d" , &a, &b) != EOF){
    x = fnc(a, b);
    printf("%d %d %d\n", a, b, x);
  }
  
  return 0;
}