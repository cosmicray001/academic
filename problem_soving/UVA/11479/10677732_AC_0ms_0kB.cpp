#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, len = 3;
    long long int n[3];
    scanf("%d", &t);
    for(int j = 0; j < t; j++){
        for(int i = 0; i < len; i++) scanf("%lld", &n[i]);
        sort(n, n + 3);
        long long int a = n[0] + n[1], b = n[2];
        if(a > b){
            if(n[0] == n[1] && n[1] == n[2] && n[2] == n[0]) printf("Case %d: Equilateral\n", j + 1);
            else if(n[0] == n[1] || n[1] == n[2] || n[2] == n[0]) printf("Case %d: Isosceles\n", j + 1);
            else printf("Case %d: Scalene\n", j + 1);
        }
        else printf("Case %d: Invalid\n", j + 1);
    }

    return 0;
}
