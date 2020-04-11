#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m, a = 0, b = 0;
    scanf("%d %d", &n, &m);
    int c = 0;
    for(; pow(a, 2) <= n && a <= m; a++){
        b = n - pow(a, 2);
        if(a + pow(b, 2) == m){
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}
