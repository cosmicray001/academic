/*#include <bits/stdc++.h>

using namespace std;

long long int fnc(long long int a){
  while(a % 2 == 0) a /= 2;
  while(a % 3 == 0) a /= 3;
  while(a % 5 == 0) a /= 5;
  return a;
}

int main()
{
  int c = 10;
  long long int n, i = 15;
  for(; ; i++){
    n = fnc(i);
    if(n == 1) c++;
    if(c == 1500) break;
  }
  printf("The 1500'th ugly number is %lld.\n", i);
  
  return 0;
}*/

//First of all I used this to find the 1500th ugly number
//Then just print that to save time
#include <iostream>

int main() {
  std::cout << "The 1500'th ugly number is 859963392.\n";
  return 0;
}