#include<bits/stdc++.h>

using namespace std;

int div_fnc(int n)
{
    if(n == 2){
        return 0;
    }
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
    return 1;
}

int main()
{
    int w = 0;
    while(scanf("%d", &w) != EOF && w){
        if(1 == div_fnc(w)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
