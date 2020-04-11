#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int n[5010];

int main()
{
    int t;
    scanf("%d", &t);
    int len;
    while(t--){
        scanf("%d", &len);
        for(int i = 0; i < len; i++) scanf("%d", &n[i]);
        sort(n, n + len);
        int min_ve = n[len - 1] - n[len - 2];
        for(int i = len - 2; i > 0; i--){
            int temp = n[i] - n[i - 1];
            if(min_ve > temp) min_ve = temp;
        }
        printf("%d\n", min_ve);
    }

    return 0;
}
