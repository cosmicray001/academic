#include <bits/stdc++.h>
#define le 109
using namespace std;
int n[le];
int main(){
    int t, co = 0, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        int c = 0;
        for(int i = 0; i < len - 1; i++){
            int min_p = i;
            for(int j = i + 1; j < len; j++){
                if(n[j] < n[min_p]) min_p = j;
            }
            if(min_p != i){
                c++;
                int temp = n[i];
                n[i] = n[min_p];
                n[min_p] = temp;
            }
        }
        printf("Case %d: %d\n", ++co, c);
    }
    return 0;
}