#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  char ch, ch1;
  string s;
  getline(cin, s);
  stringstream ss(s);
  ss >> a >> ch >> b >> ch1 >> c;
  if(ch == '+'){
	  a += b;
	  }
  else if(ch == '*') a *= b;
  else if(ch == '-') a -= b;
  else a /= b;
  
  printf("%s\n", (a == c) ? "YES" : "NO");
  return 0;
}
