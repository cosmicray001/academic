#include <bits/stdc++.h>
using namespace std;
stack<string> st1;
stack<string> st2;
int main(){
  int t, co = 0;
  string a, b, s;
  for(scanf("%d", &t); t--; ){
    printf("Case %d:\n", ++co);
    while(!st1.empty()) st1.pop();
    while(!st2.empty()) st2.pop();
    a = "http://www.lightoj.com/";
    while(cin >> s){
      if(s == "VISIT"){
        st2.push(a);
        cin >> a;
        cout << a << endl;
        while(!st1.empty()) st1.pop();
      }
      else if(s == "BACK"){
        if(st2.empty()) printf("Ignored\n");
        else{
          st1.push(a);
          a = st2.top();
          cout << a << endl;
          st2.pop();
        }
      }
      else if(s == "FORWARD"){
        if(st1.empty()) printf("Ignored\n");
        else{
          st2.push(a);
          a = st1.top();
          cout << a << endl;
          st1.pop();
        }
      }
      else break;
    }
  }
  return 0;
}
