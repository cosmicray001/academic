    #include <bits/stdc++.h>
    #define le 1003
    using namespace std;
    int n[le], m[le];
    int main(){
        int t, len, len1;
        for(scanf("%d", &t); t--; ){
            scanf("%d", &len);
            for(int i = 0; i < len; scanf("%d", &n[i]), i++);
            scanf("%d", &len1);
            for(int i = 0; i < len1; scanf("%d", &m[i]), i++);
            int sum = INT_MAX;
            for(int i = 0; i < len; i++){
                for(int j = 0; j < len1; j++) sum = min(sum, abs(n[i] - m[j]));
            }
            printf("%d\n", sum);
        }
        return 0;
    }