#include <bits/stdc++.h>
 
using namespace std;
 
bool fnc(char ch[]){
    string s = "donate";
    for(int i = 0; i < s.size(); i++){
        if(ch[i] != s[i]) return 0;
    }
    return 1;
}
 
int main(){
    int len, co = 0;
    scanf("%d", &len);
    while(len--){
        printf("Case %d:\n", ++co);
        int t, sum = 0;
        char ch[7];
        for(scanf("%d", &t); t--; ){
            scanf("%s", ch);
            if(fnc(ch)){
                int x;
                scanf("%d", &x);
                sum += x;
            }else printf("%d\n", sum);
        }
    }
    return 0;
}