#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, c = 0;
    int a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        int re;
        if(a == 1 || b == 1) re = a * b;
        else if(a == 2 || b == 2){
            re = a;
            if(a == 2) re = b;
            if(re % 4 == 0) re = re;
            else if(re % 4 == 1) re += 1;
            else if(re % 4 == 2) re += 2;
            else if(re % 4 == 3) re += 1;
        }
        else{
            re = a * b;
            if(re % 2 == 0) re /= 2;
            else{
                re /= 2;
                re++;
            }
        }
        printf("Case %d: %d\n", ++c, re);
    }

    return 0;
}
