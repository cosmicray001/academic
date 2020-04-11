#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int x;
    double out, y;
    while(scanf("%d %lf", &x, &y) != EOF){
        if(x % 5 == 0){
            out = x + 0.5;
            if(out <= y){
                printf("%0.2lf\n", y - out);
            }
            else printf("%0.2lf\n", y);
        }
        else printf("%0.2lf\n", y);
    }

    return 0;
}
