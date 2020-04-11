#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  string a, b, s;
  for(scanf("%d", &t); t--; ){
    cin >> a >> b;
    s = "";
    int i, j;
    for(i = a.size() - 1, j = b.size() - 1; i >= 0 && j >= 0; i--, j--) s += (((a[i] - '0') + (b[j] - '0')) % 10) + '0';
    while(i >= 0) s += a[i--];
    while(j >= 0) s += b[j--];
    for(i = s.size() - 1; i >= 0; printf("%c", s[i]), i--);
    printf("\n");
  }
  return 0;
}
