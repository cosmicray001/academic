#include<bits/stdc++.h>

using namespace std;

int main()
{
    double ba = 0;
    int wi = 0;
    while(scanf("%d %lf", &wi, &ba) != EOF){
        if(wi % 5 == 0 && wi + 0.50 <= ba){
            printf("%0.2lf\n", (ba - (wi + 0.50)) * 1.0);
        }
        else{
            printf("%0.2lf\n", ba);
        }
    }

    return 0;
}
