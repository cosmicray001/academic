#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t, a, len, co = 0;
  while(scanf("%d", &t) != EOF && t){
    if(co++) printf("\n");
    vector<int> v;
    stack<int> st, st1;
    while(scanf("%d", &a) != EOF && a){
      v.push_back(a);
      st.push(t);
      for(int i = 1; i < t; i++){
        scanf("%d", &a);
        v.push_back(a);
        st.push(t - i);
      }
      bool f = true;
      for(int i = 0; i < v.size(); i++){
        if(st1.empty()){
          while(!st.empty()){
            int b = st.top();
            st.pop();
            if(v[i] != b) st1.push(b);
            else break;
          }
        }
        else{
          if(v[i] == st1.top()) st1.pop();
          else{
            f = false;
            while(!st.empty()){
              int x = st.top();
              st.pop();
              if(v[i] != x) st1.push(x);
              else{
                f = true;
                break;
              }
            }
          }
        }
      }
      printf("%s\n", f ? "Yes" : "No");
      v.clear();
      while(!st.empty()) st.pop();
      while(!st1.empty()) st1.pop();
    }
  }
  printf("\n");
  return 0;
}
