#include <bits/stdc++.h>
#define le 1003
using namespace std;
set<int> st;
int main(){
  int t, len, a;
  for(scanf("%d", &t); t--; ){
    scanf("%d", &len);
    bool f = true;
    for(int i = 0; i < len; scanf("%d", &a), st.insert(a), i++);
    if(st.size() < len) f = false;
    printf("%s\n", f ? "YES" : "NO");
    st.clear();
  }
  return 0;
}
