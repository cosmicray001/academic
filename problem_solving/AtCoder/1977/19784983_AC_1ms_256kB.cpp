#include <bits/stdc++.h>
using namespace std;
int main(){
  int n[12], a;
  for(int i = 0; i < 3; scanf("%d", &a), n[a]++, i++);
  printf("%s\n", (n[5] == 2 && n[7] == 1) ? "YES" : "NO");
  return 0;
}