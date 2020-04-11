#include <stdio.h>
int f = 0;
int v[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109};
void fnc(int a){
    for(int i = 0; i < 29 && v[i] <= a; i++){
        int temp = a, x = 0, div = v[i];
        while(temp / div > 0){
            x += (temp / div);
            temp /= div;
        }
        if(f == 1) printf(" * ");
        printf("%d (%d)", v[i], x);
        f = 1;
    }
}
int main(){
    int t, co = 0, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        f = 0;
        printf("Case %d: %d = ", ++co, a);
        fnc(a);
        printf("\n");
    }
    return 0;
}