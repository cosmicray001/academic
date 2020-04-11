#include <bits/stdc++.h>
using namespace std;
bool fnc(int n){
  for(; n > 0; n /= 10) if(n % 10 != 4 && n % 10 != 7) return false;
  return true;
}
int main(){
  int a;
  cin >> a;
  for(int i = 1; i < sqrt(a) + 2; i++){
    if(a % i == 0){
        if(fnc(i)){
        cout << "YES" << endl;
        return 0;
      }
      if(fnc(a / i)){
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}