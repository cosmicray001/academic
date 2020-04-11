#include <bits/stdc++.h>

#define le 102
#define le1 3003

using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
int arr[le1];
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
bool fnc(int a){
  int co = 0;
  for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
    if(a % v[i] == 0){
      while(a % v[i] == 0) a /= v[i];
      co++;
    }
  }
  if(a != 1) co++;
  return (co == 2);
}
int main(){
    se();
    int t, co = 0;
    n[0] = n[1] = n[2] = n[3] = 0;
    for(int i = 4; i < le1; i++){
      arr[i] = arr[i - 1];
      if(fnc(i)) arr[i]++;
    }
    int a;
    scanf("%d", &a);
    printf("%d\n", arr[a]);
    return 0;
}