#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, pre_pri, pri, me, c = 0;
    scanf("%d", &t);
    scanf("%d %d", &me, &pre_pri);
    c = me * pre_pri;
    for(int i = 1; i < t; i++){
        scanf("%d %d", &me, &pri);

        if(pre_pri > pri){
            pre_pri = pri;
        }
        c += me * pre_pri;
    }
    printf("%d\n", c);

    return 0;
}
