#include <bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s = "";
  unordered_set<string> st;
  int t, co = 0;
  string ss;
  cin >> t;
  while(t--){
    cin >> ss;
    if(ss.size() < 4) continue;
    int s1 = st.size();
    st.insert(ss);
    int s2 = st.size();
    if(s1 == s2){
      s += ss + "\n";
      co++;
    }
  }
  if(co == 0) cout << "SAFO\n";
  else{
    cout << co << "\n";
    cout << s;
  }
  return 0;
}
