#include <stdio.h>
#define le 102
int n[le];
int len;
void fnc(int a){
    int i;
    for(i = 0; i < len; n[i] += a, i++);
}
void fnc1(int a){
    int i;
    for(i = 0; i < len; n[i] *= a, i++);
}
void fnc2(int a){
    int i;
    for(int i = 0; i < len; n[i] /= a, i++);
}
void fnc3(){
    int i, j;
    for(i = 0, j = len - 1; i < len / 2; i++, j--){
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }
}
void fnc4(int a, int b){
    int temp = n[a];
    n[a] = n[b];
    n[b] = temp;
}
int main(){
    int t, co = 0, a, i, x, y;
    char ch[2];
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &a);
        for(i = 0; i < len; scanf("%d", &n[i]), i++);
        while(a--){
            scanf("%s", &ch);
            if(ch[0] == 'S'){
                scanf("%d", &x);
                fnc(x);
            }
            else if(ch[0] == 'M'){
                scanf("%d", &x);
                fnc1(x);
            }
            else if(ch[0] == 'D'){
                scanf("%d", &x);
                fnc2(x);
            }
            else if(ch[0] == 'R') fnc3();
            else if(ch[0] == 'P'){
                scanf("%d %d", &x, &y);
                fnc4(x, y);
            }
        }
        printf("Case %d:\n", ++co);
        for(i = 0; i < len - 1; printf("%d ", n[i]), i++);
        printf("%d\n", n[len - 1]);
    }
    return 0;
}