#include <bits/stdc++.h>

using namespace std;

char fnc(int a){
  if(a <= 9) return (a + '0');
  else if(a == 10) return 'a';
  else if(a == 11) return 'b';
  else if(a == 12) return 'c';
  else if(a == 13) return 'd';
  else if(a == 14) return 'e';
  else return 'f';
}

int main()
{
  int t, n;
  scanf("%d", &t);
  while(t--){
    vector <int> v;
    scanf("%d", &n);
    int temp = n;
    for(; temp > 15; temp /= 16) v.push_back(temp % 16);
    v.push_back(temp);
    for(int i = v.size() - 1; i >= 0; i--){
      char ch = fnc(v[i]);
      printf("%c", ch);
    }
    printf("\n");
  }
  
  return 0;
}