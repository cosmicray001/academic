#include <stdio.h>
#include <string.h>

int n[125];
int m[125];

int min(int a, int b){
  if(a < b) return a;
  return b;
}

int fnc(char ch[], char ch1[]){
  for(int i = 0; i <= 123; i++){
    n[i] = 0;
    m[i] = 0;
  }
  int len1 = strlen(ch), len2 = strlen(ch1);
  for(int i = 0; i < len1; i++){
    n[ch[i]]++;
  }
  for(int i = 0; i < len2; i++){
    m[ch1[i]]++;
  }
  int sum = 0;
  for(int i = 0; i < 123; i++){
    sum += min(n[i], m[i]);
  }
  return sum;
}

int main(){
  int t;
  for(scanf("%d", &t); t--; ){
    char ch[10004], ch1[10004];
    scanf("%s %s", ch, ch1);
    //printf("%d\n%d\n", strlen(ch), strlen(ch1));
    printf("%d\n", fnc(ch, ch1));
  }
  return 0;
}