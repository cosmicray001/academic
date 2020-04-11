#include <bits/stdc++.h>

using namespace std;

int re_fnc(int n)
{
    if(n == 2) return 0;
    else if(n % 2 == 0) return 1;
    else return 0;
}

int main()
{
    int w;
    while(scanf("%d", &w) != EOF && w){
        int ss = re_fnc(w);
        if(ss == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}