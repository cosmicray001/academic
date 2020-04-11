#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, n;
    scanf("%d", &t);

    int ev_pos = 0, odd_pos = 0, c1 = 0, c2 = 0;

    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            c1++;
            ev_pos = i;
        }
        else if(n % 2 != 0){
            c2++;
            odd_pos = i;
        }
    }

    if(c1 > c2) printf("%d\n", odd_pos);
    else printf("%d\n", ev_pos);

    return 0;
}
