#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[3], len = 3;
    while(1){
        for(int i = 0; i < len; i++) scanf("%d", &n[i]);
        if(n[0] == 0 && n[1] == 0 && n[2] == 0) break;

        sort(n, n + 3);
        long long int a = pow(n[0], 2);
        long long int b = pow(n[1], 2);
        long long int c = pow(n[2], 2);
        if( (a + b) == c) printf("right\n");
        else printf("wrong\n");
    }

    return 0;
}
