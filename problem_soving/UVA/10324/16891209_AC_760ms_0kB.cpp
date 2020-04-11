#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a, b, q, co = 0;
    char ch[1000006];
    while(scanf("%s %d", ch, &q) != EOF){
        printf("Case %d:\n", ++co);
        while(q--){
            scanf("%d %d", &a, &b);
            if(a > b) swap(a, b);
            bool f = 1;
            for(int i = a; i < b; i++) if(ch[i] != ch[i + 1]){
                f = 0;
                break;
            }
            printf("%s\n", f ? "Yes" : "No");
        }
    }
    return 0;
}