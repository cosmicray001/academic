#include <bits/stdc++.h>
 
using namespace std;
int a[40];
int main(){
    int t, co = 0, len, p, q, x;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d", &len, &p, &q);
        int sum = 0, c = 0;
        for(int i = 0; i < len; scanf("%d", &a[i]), i++);
        for(int i = 0; i < len; i++){
            sum += a[i];
            c++;
            if(c > p || sum > q){
                c--;
                break;
            }
        }
        printf("Case %d: %d\n", ++co, c);
    }
    return 0;
}