#include <bits/stdc++.h>
#define le 100000008
using namespace std;
int index;
int ok(int a){
    a /= 5;
    if(!a) return 0;
    return a + + ok(a);
}
int fnc_lo(int key){
  int hi = le - 1, lo = 1, mid;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    int ve = ok(mid);
    if(key == ve){
      index = mid;
      hi = mid - 1;
    }
    else if(key < ve) hi = mid - 1;
    else lo = mid + 1;
  }
  return lo;
}
int fnc_up(int key){
  int hi = le - 1, lo = 0, mid;
  while(lo <= hi){
    mid = (hi + lo) / 2;
    int ve = ok(mid);
    if(key == ve){
      index = mid;
      lo = mid + 1;
    }
    else if(key < ve) hi = mid - 1;
    else lo = mid + 1;
  }
  return lo;
}
int main(){
    int a;
    cin >> a;
    int lo = fnc_lo(a);
    int hi = fnc_up(a);
    printf("%d\n", hi - lo);
    for(int i = lo; i < hi; i++){
        if(i != lo) printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
