#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, a, b, c, d;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        ++c;
        ++d;
        a = (a * c) + 1;
        b = (b * d) + 1;
        for(int i = 1; i <= a; i++){
            if(i % c == 1){
                for(int i = 1; i <= b; printf("*"), i++);
                printf("\n");
            }else{
                for(int i = 1; i <= b; i++){
                    if(i % d == 1) printf("*");
                    else printf(".");
                }
                printf("\n");
            }
        }
        if(t) printf("\n");
    }
    return 0;
}