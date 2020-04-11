#include <bits/stdc++.h>
#define le 10004
using namespace std;
double n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        double aus = 0.0;
        for(int i = 0; i < len; scanf("%lf", &n[i]), aus += n[i],i++);
        aus /= len;
        int co = 0;
        for(int i = 0; i < len; i++) if(n[i] > aus) co++;
        aus = (100.0 / len) * co;
        printf("%.3lf%%\n", aus);
    }
    return 0;
}