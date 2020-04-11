#include <bits/stdc++.h>

using namespace std;

int main()
{
  int s, t, a, b, m, n, da, db;
  scanf("%d %d %d %d %d %d", &s, &t, &a, &b, &m, &n);
  int c = 0;
  for(int i = 0; i < m; i++){
    scanf("%d", &da);
    int temp = a + da;
    if(temp >= s && temp <= t) c++;
  }
  printf("%d\n", c);
  c = 0;
  for(int i = 0; i < n; i++){
    scanf("%d", &db);
    int temp = b + db;
    if(temp >= s && temp <= t) c++;
  }
  printf("%d\n", c);
  
  return 0;
  
}