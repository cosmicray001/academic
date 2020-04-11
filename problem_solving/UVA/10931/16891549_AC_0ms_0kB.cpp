#include <bits/stdc++.h>
using namespace std;
int sum;
void fnc(int a){
    if(a == 0) return;
    int temp = a % 2;
    if(temp == 1) sum++;
    fnc(a / 2);
    printf("%d", temp);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a;
    while(scanf("%d", &a) != EOF && a){
        sum = 0;
        printf("The parity of ");
        fnc(a);
        printf(" is %d (mod 2).\n", sum);
    }
    return 0;
}