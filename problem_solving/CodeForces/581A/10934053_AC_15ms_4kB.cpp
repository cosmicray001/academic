#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        if(b > a){
            int temp = a;
            a = b;
            b = temp;
        }
        int fac = b;
        int non_fac = 0;
        if(a - b >= 2){
            non_fac = (a - b) / 2;
        }
        printf("%d %d\n", fac, non_fac);
    }

    return 0;
}
