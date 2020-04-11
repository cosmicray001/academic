#include <bits/stdc++.h>
#define le 10004
 
using namespace std;
bool n[le >> 1];
vector<int> v;
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i <= rt; i += 2){
        if(!n[i >> 1]) for(int j = i * i, k = i << 1; j < le; j += k) n[j >> 1] = 1;
    }
    v.push_back(2);
    for(int i = 3; i < le; i += 2){
      if(!n[i >> 1]) v.push_back(i);
    }
}

int fnc(int a, int b){
  int hi = v.size() - 1, lo = 0, mid;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    if(a + b == v[mid]) return v[mid + 1];
    else if(a + b < v[mid]) hi = mid - 1;
    else lo = mid + 1;
  }
  return v[lo];
}

int main(){
    
    se();
    int t, a, b, c;
    for(scanf("%d", &t); t--; ){
      scanf("%d %d", &a, &b);
      printf("%d\n", fnc(a, b) - (a + b));
    }
    return 0;
}