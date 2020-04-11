#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int y, n[4];
    scanf("%d", &y);
    y++;
    for(int i = y; ; i++){
        int temp = i;
        for(int c = 3; temp > 0; temp /= 10, c--){
            n[c] = temp % 10;
        }
        //for(int t = 0; t < 4; t++) printf("%d\n", n[t]);
        if(n[0] != n[1] && n[0] != n[2] && n[0] != n[3] && n[1] != n[2] && n[1] != n[3] && n[2] != n[3]){
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
