#include <bits/stdc++.h>
using namespace std;
int arr[93], arr1[93], arr2[93];
int main(){
  //freopen("input.txt", "r", stdin);
  string s, a, b;
  cin >> s >> a >> b;
  //if(s.size() + a.size() == b.size()) printf("NO\n");
  if(1){
    for(int i = 0; i < s.size(); i++){
      arr[s[i]]++;
    }
    for(int i = 0; i < a.size(); i++){
      arr[a[i]]++;
    }
    for(int i = 0; i < b.size(); i++){
      arr1[b[i]]++;
    }
    bool f = true;
    for(int i = 65; i < 92; i++){
      if(arr[i] != arr1[i]){
        //printf("%c %d %d\n", i, arr[i], arr1[i]);
        f = false;
        break;
      }
    }
    printf("%s\n", f ? "YES" : "NO");
  }
  return 0;
}
