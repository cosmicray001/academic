#include <bits/stdc++.h>
#define le 1000006

using namespace std;
bool n[le >> 1];
int arr[le];

void se(){
  int rt = sqrt(le) + 1, k;
  n[2] = 0;
  for(int i = 3; i <= rt; i += 2){
    if(!n[i >> 1]){
      for(int j = i * i, k = i << 1; j <= le; j += k) n[j >> 1] = 1;
    }
  }
  //for(int i = 3; i < 124; i += 2) if(!n[i >> 1]) printf("%d\n", i);
}

bool fnc(int a){
  int temp = a, c = 0, re;
  for(; a > 0; a /= 10){
    if(a % 10 == 0) return 0;
    c++;
  }
  for(c = c - 1; c > 0; c--){
    re = pow(10, c);
    temp = temp % re;
    if((temp % 2 != 0 && n[temp >> 1]) || (temp != 2 && temp % 2 == 0) || temp == 1) return 0;
  }
  return 1;
}

void ge(){
  arr[2] = 1;
  for(int i = 3; i < le; i += 2){
    if(!n[i >> 1] && fnc(i)) arr[i] = 1;
  }
  for(int i = 1; i < le; i++) arr[i] += arr[i - 1];
}

int main(){
  se();
  ge();
  int t, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &a);
    printf("%d\n", arr[a]);
  }
  
  return 0;
}
/*int main(){
  se();
  ge();
  //if(n[9 >> 1]) printf("n\n");
  //else printf("Y\n");
  int t;
  scanf("%d", &t);
  for(int i = 1; i < t; i++) printf("%d %d _____>> %s %d\n", arr[i], i, (n[i >> 1] == true) ? "Y" : "N", i);
  return 0;
}*/