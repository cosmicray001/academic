#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(m == 0) printf("YES\n");
    //else if(n > m) printf("YES\n");
    else{
        if(m % n == 0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
