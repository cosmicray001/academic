#include <bits/stdc++.h>
using namespace std;
int n[55];
int main(){
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int len;
    while(scanf("%d", &len) != EOF && len){
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        int sum = 0;
        for(int i = 0; i < len - 1; i++){
            for(int j = i + 1; j < len; j++) if(__gcd(n[i], n[j]) == 1) sum++;
        }
        if(!sum) printf("No estimate for this data set.\n");
        else{
            len = (len * (len - 1)) / 2;
            double x = sqrt((6.0 * len) / (sum * 1.0));
            printf("%.6lf\n", x);
        }
    }
    return 0;
}