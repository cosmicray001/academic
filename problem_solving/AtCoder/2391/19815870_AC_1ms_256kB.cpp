#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%s\n", (b - a == c - b) ? "YES" : "NO");
  return 0;
}