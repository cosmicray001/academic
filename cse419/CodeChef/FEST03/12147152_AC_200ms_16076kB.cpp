#include <bits/stdc++.h>

using namespace std;
int n[124];

int main(){
  int t;
  string s1;
  scanf("%d", &t);
  getline(cin, s1);
  while(t--){
    string s;
    getline(cin, s);
    printf("ocul.in/");
    int len = s.size();
    for(int i = 97; i <= 122; i++) n[i] = 0;
    for(int i = 0; i < len; i++) n[s[i]]++;
    int te = 3;
    while(te--){
      int p = n[97], po = 97;
      for(int i = 98; i <= 122; i++){
        if(p < n[i]){
          p = n[i];
          po = i;
        }
      }
      printf("%c%d", po, p);
      n[po] = 0;
    }
    printf("\n");
    //cout << s << endl;
  }
}