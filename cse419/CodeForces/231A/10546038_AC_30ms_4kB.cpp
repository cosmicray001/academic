#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    int tot = 0;
    for(int i = 0; i < t; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a + b + c >= 2){
            tot++;
        }
    }
    printf("%d\n", tot);

    return 0;
}
