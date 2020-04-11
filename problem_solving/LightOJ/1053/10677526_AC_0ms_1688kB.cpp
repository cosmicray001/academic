#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    int n[3], len = 3;

    for(int i = 1; i <= t; i++){
        for(int j = 0; j < len; j++) scanf("%d", &n[j]);
        sort(n, n + 3);
        /*for(int j = 0; j < len; j++){
            printf("%d\n", n[j]);
        }*/
        int ve = ((pow(n[0], 2) + pow(n[1], 2)) - pow(n[2], 2));
        if(!ve) printf("Case %d: yes\n", i);
        else printf("Case %d: no\n", i);
    }

    return 0;
}
