#include <bits/stdc++.h>
//#define le 46350
#define le 1000006
using namespace std;
int n[le >> 6];
vector<int> v, p;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
void fnc(int a){
  for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
    if(a % v[i] == 0){
      while(a % v[i] == 0){
        a /= v[i];
        p.push_back(v[i]);
      }
    }
  }
  if(a != 1) p.push_back(a);
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    se();
    int a;
    while(scanf("%d", &a) != EOF && a){
      if(a <= -1) fnc(a * -1);
      else fnc(a);
      if(a <= -1) printf("%d = -1 x", a);
      else printf("%d =", a);
      for(int i = 0; i < p.size() - 1; i++) printf(" %d x", p[i]);
      printf(" %d\n", p[p.size() - 1]);
      p.clear();
    }
    return 0;
}
