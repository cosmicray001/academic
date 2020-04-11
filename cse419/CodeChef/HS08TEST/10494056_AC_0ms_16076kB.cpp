#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int w;
    double d;

    while(scanf("%d %lf", &w, &d) != EOF){
        if(w % 5 == 0){
            double f = w + 0.50;
            if(f <= d) printf("%0.2lf\n", d - f);
            else printf("%0.2lf\n", d);
        }
        else printf("%0.2lf\n", d);
    }

    return 0;
}
