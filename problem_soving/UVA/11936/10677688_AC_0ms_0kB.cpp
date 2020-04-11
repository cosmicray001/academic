#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n[3], len = 3;
    scanf("%d", &t);
    for(int i = 0; i  < t; i++){
        for(int j = 0; j < len; j++) scanf("%d", &n[j]);
        sort(n, n + 3);
        int a = n[0] + n[1], b = n[2];
        if(a > b) printf("OK\n");
        else printf("Wrong!!\n");
    }

    return 0;
}
