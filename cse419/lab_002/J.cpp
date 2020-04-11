#include <bits/stdc++.h>
using namespace std;
deque<int> de;
int main(){
  int t, co = 0, a, n, m;
  string s;
  for(scanf("%d", &t); t--; ){
    printf("Case %d:\n", ++co);
    while(!de.empty()) de.pop_back();
    scanf("%d %d", &n, &m);
    int len = 0;
    while(m--){
      cin >> s;
      if(s[1] == 'u'){
        scanf("%d", &a);
        if(s[4] == 'L'){
          if(len == n) printf("The queue is full\n");
          else{
            printf("Pushed in left: %d\n", a);
            de.push_front(a);
            len++;
          }
        }
        else{
          if(len == n) printf("The queue is full\n");
          else{
            printf("Pushed in right: %d\n", a);
            de.push_back(a);
            len++;
          }
        }
      }
      else{
        if(s[3] == 'L'){
          if(de.empty()) printf("The queue is empty\n");
          else{
            cout << "Popped from left: " << de.front() << endl;
            de.pop_front();
            len--;
          }
        }
        else{
          if(de.empty()) printf("The queue is empty\n");
          else{
            cout << "Popped from right: " << de.back() << endl;
            de.pop_back();
            len--;
          }
        }
      }
    }
  }
  return 0;
}
