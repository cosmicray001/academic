#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int t;
    double a, b;
    for(scanf("%d", &t); t--; ){
        scanf("%lf %lf", &a, &b);
        printf("%.7lf\n", a + b);
    }
    return 0;
}