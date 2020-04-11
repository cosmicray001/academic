#include <bits/stdc++.h>
#define le 1003
using namespace std;
int fnc(int a){
    if(a == 63) return 0;
    else if(a == 10) return 1;
    else if(a == 93) return 2;
    else if(a == 79) return 3;
    else if(a == 106) return 4;
    else if(a == 103) return 5;
    else if(a == 119) return 6;
    else if(a == 11) return 7;
    else if(a == 127) return 8;
    return 9;
}
string fnc2(int a){
    if(a == 0) return "063";
    else if(a == 1) return "010";
    else if(a == 2) return "093";
    else if(a == 3) return "079";
    else if(a == 4) return "106";
    else if(a == 5) return "103";
    else if(a == 6) return "119";
    else if(a == 7) return "011";
    else if(a == 8) return "127";
    return "107";
}
int fnc1(int a){
    int sum = 1;
    for(int i = 0; i < a; sum *= 10, i++);
    return sum;
}
int main(){
    char ch[le];
    while(scanf("%s", ch) != EOF && ch[0] != 'B'){
        int sum = 0, sum1 = 0, sum2 = 0, a = 0;
        int i;
        for(i = 0; ch[i] != '+'; i += 3){
            sum = 100 * (ch[i] - '0') + 10 * (ch[i + 1] - '0') + (ch[i + 2] - '0');
            sum1 = sum1 * 10 + fnc(sum);
        }
        for(++i; ch[i] != '='; i += 3){
            sum = 100 * (ch[i] - '0') + 10 * (ch[i + 1] - '0') + (ch[i + 2] - '0');
            sum2 = sum2 * 10 + fnc(sum);
        }
        a = sum1 + sum2;
        int x = log10(a) + 1;
        int y = fnc1(x - 1);
        printf("%s", ch);
        for(i = 0; i < x; i++){
            cout << fnc2(a / y);
            a = a - (a / y) * y;
            y /= 10;
        }
        printf("\n");
    }
    return 0;
}
