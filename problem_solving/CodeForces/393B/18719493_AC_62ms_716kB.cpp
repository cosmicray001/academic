#include <bits/stdc++.h>
using namespace std;
#define le 172
double n[le][le], a[le][le], b[le][le];
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int len;
  scanf("%d", &len);
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      scanf("%lf", &n[i][j]);
    }
  }
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      a[i][j] = a[j][i] = (n[i][j] + n[j][i]) / 2.0;
      b[i][j] = (n[i][j] - a[i][j]);
      b[j][i] = (n[j][i] - a[j][i]);
    }
  }
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      if(j != 0 || j != len - 1) printf(" ");
      printf("%.8lf", a[i][j]);
    }
    printf("\n");
  }
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len; j++){
      if(j != 0 || j != len - 1) printf(" ");
      printf("%.8lf", b[i][j]);
    }
    printf("\n");
  }
  return 0;
}

