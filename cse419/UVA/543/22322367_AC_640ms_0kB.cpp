#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
void fnc(int a){
  for(int i = 0; i < v.size() && v[i] <= a; i++){
    for(int j = i; j < v.size() && v[i] + v[j] <= a; j++){
      if(v[i] + v[j] == a){
        printf("%d = %d + %d\n", a, v[i], v[j]);
        return;
      }
    }
  }
  printf("Goldbach's conjecture is wrong.\n");
  return;
}
int main(){
    se();
    int a, b, c;
    while(scanf("%d", &a) != EOF && a){
      fnc(a);
    }
    return 0;
}
