#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t, co = 0, y1, y2, d1, d2;
    char ch[15], ch1[15], ca;
    for(scanf("%d", &t); t--; ){
        scanf("%s %d, %d", ch, &d1, &y1);
        scanf("%s %d, %d", ch1, &d2, &y2);
        if(strcmp(ch, "January") != 0 && strcmp(ch, "February") != 0) y1++;
        if(strcmp(ch1, "January") == 0 || (strcmp(ch1, "February") == 0 && d2 < 29)) y2--;
        int x = (y2 / 4) - ((y1 - 1) / 4);
        int y = (y2 / 100) - ((y1 - 1) / 100);
        int z = (y2 / 400) - ((y1 - 1) / 400);
        printf("Case %d: %d\n", ++co, x - y + z);
    }
    return 0;
}
 