#include <bits/stdc++.h>
#define le 32768
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
int fnc(int a){
  int co = 0;
  for(int i = 0; i < v.size() && v[i] <= a / 2; i++){
    for(int j = i; j < v.size() && v[i] + v[j] <= a; j++){
      if(v[i] + v[j] == a) co++;
    }
  }
  return co;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    int a;
    while(scanf("%d", &a) != EOF && a){
      printf("%d\n", fnc(a));
    }
    return 0;
}
