#include <bits/stdc++.h>
#define le 10000007
#define ll long long

using namespace std;
bool n[le >> 1];
int arr[le];

void se(){
  int rt = sqrt(le) + 1, k;
  for(int i = 3; i <= rt; i += 2){
    if(!n[i >> 1]) for(int j = i * i, k = i << 1; j <= le; j += k) n[j >> 1] = 1; 
  }
}

bool pri(int x){
  if(x < 2) return 0;
  if(x == 2) return 1;
  if(x & 1 && !n[x >> 1]) return 1;
  return 0;
}

void ge(){
  memset(arr, 0, le);
  int i, j, x, y, p;
  for(i = 0; (x = i * i) < le; i++){
    for(j = 0; (y = j * j * j * j) < le; j++){
      p = x + y;
      if(p < le && pri(p)) arr[p] = 1;
    }
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