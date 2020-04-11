#include <bits/stdc++.h>

using namespace std;

double x = 0.000001;

int main()
{
    int t;
    scanf("%d", &t);
    double n;
    for(int i = 0; i < t; i++){
        scanf("%lf", &n);
        double p1 = (8 * n - 7);
        double root = sqrt(p1), take;
        double frac = modf(root, &take);
        if(frac == 0){
            printf("%d ", 1);
        }
        else printf("%d ", 0);

    }
    printf("\n");
}
