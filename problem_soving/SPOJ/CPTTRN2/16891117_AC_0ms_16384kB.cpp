#include <bits/stdc++.h>
 
using namespace std;
 
void fnc(int a){
    for(int i = 0; i < a; printf("*"), i++);
    printf("\n");
}
 
void fnc1(int a){
    for(int i = 1; i <= a; i++){
        if(i == 1 || i == a) printf("*");
        else printf(".");
    }
    printf("\n");
}
 
int main(){
    int t, a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &b);
        for(int i = 1; i <= a; i++){
            if(i == 1 || i == a) fnc(b);
            else fnc1(b);
        }
        if(t) printf("\n");
    }
    return 0;
}