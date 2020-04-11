#include <bits/stdc++.h>
 
using namespace std;
 
void fnc(int a){
    for(int i = 1; i <= a; i++){
        if(i % 3 == 1) printf("*");
        else printf(".");
    }
    printf("\n");
}
 
int main(){
    int t, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        a = (a * 3) + 1;
        b = (b * 3) + 1;
        for(int i = 1; i <= a; i++){
            if(i % 3 == 1){
                for(int i = 1; i <= b; printf("*"), i++);
                printf("\n");
            }
            else fnc(b);
        }
        if(t) printf("\n");
    }
    return 0;
}