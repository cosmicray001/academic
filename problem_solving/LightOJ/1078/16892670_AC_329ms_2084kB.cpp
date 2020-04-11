#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, co = 0, a, d;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &a, &d);
        int c = 0, sum = 0;
        while(1){
            sum = ((sum * 10)%a + d%a) %a;
            c++;
            if(sum % a == 0) break;
        }
        printf("Case %d: %d\n", ++co, c);
    }
    return 0;
}
