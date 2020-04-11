#include <stdio.h>
#include <string.h>

int n[123];
int m[123];

int fnc(char ch[], char ch1[]){
    int len = strlen(ch), len1 = strlen(ch1);
    int le = 0, le1 = 0;
    for(int i = 0; i < 123; i++){
        n[i] = 0;
        m[i] = 0;
    }
    for(int i = 0; i < len; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z') ch[i] = ch[i] - 'a' + 'A';
        n[ch[i]]++;
    }
    for(int i = 0; i < len1; i++){
        if(ch1[i] >= 'a' && ch1[i] <= 'z') ch1[i] = ch1[i] - 'a' + 'A';
        m[ch1[i]]++;
    }
    for(int i = 65; i < 91; i++){
        if(n[i] != m[i]) return 0;
    }
    return 1;
}

int main(){
    char ch[102];
    char ch1[102];
    int t, co = 0;
    scanf("%d", &t);
    getchar();
    while(t--){
        gets(ch);
        gets(ch1);
        if(fnc(ch, ch1) == 1) printf("Case %d: Yes\n", ++co);
        else printf("Case %d: No\n", ++co);
    }
    return 0;
}
