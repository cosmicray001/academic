#include <bits/stdc++.h>

using namespace std;

int fnc(int a, int b){
    if(a == 1 || b == 1) return (a * b);
    else if(a == 2 || b == 2){
        int x = max(a, b);
        int re = x % 4;
        if(re == 0) return x;
        else if(re % 4 == 1) return x + 1;
        else if(re % 4 == 2) return x + 2;
        else return x + 1;
    }else{
        a *= b;
        if(a % 2 == 0) return (a / 2);
        else return (++a / 2);
    }
}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF && a && b){
        int x = fnc(a, b);
        printf("%d knights may be placed on a %d row %d column board.\n", x, a, b);
    }

    return 0;
}