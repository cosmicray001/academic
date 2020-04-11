#include <bits/stdc++.h>

using namespace std;

int n[110];

int main()
{
    int t, len;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &len);
        int c = 1;
        for(int i = 0; i < len; i++){
            scanf("%d", &n[i]);
        }
        sort(n, n + len);
        int max_ve = 1, po = 0;
        for(int i = 1; i < len; i++){
            if(n[i] == n[i - 1]) c++;
            else c= 1;
            if(max_ve < c){
                max_ve = c;
                po = i;
            }
        }
        printf("%d %d\n", n[po], max_ve);
    }

    return 0;
}
