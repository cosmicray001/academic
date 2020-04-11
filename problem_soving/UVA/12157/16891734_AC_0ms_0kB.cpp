#include <bits/stdc++.h>
using namespace std;
int n[22], m[22];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &n[i]), m[i] = n[i], i++);
        int sum = 0, sum1 = 0, a = 0, b = 0;
        for(int i = 0; i < len; i++){
            if(n[i]){
                a = 1;
                n[i] -= 29;
            }
            while(n[i] > 0){
                n[i] -= 30;
                a++;
            }
            sum += a;
        }
        for(int i = 0; i < len; i++){
            if(m[i]){
                m[i] -= 59;
                b = 1;
            }
            while(m[i] > 0){
                m[i] -= 60;
                b++;
            }
            sum1 += b;
        }
        sum *= 10;
        sum1 *= 15;
        printf("Case %d: ", ++co);
        if(sum < sum1) printf("Mile %d\n", sum);
        else if(sum1 < sum) printf("Juice %d\n", sum1);
        else printf("Mile Juice %d\n", sum);
    }
    return 0;
}