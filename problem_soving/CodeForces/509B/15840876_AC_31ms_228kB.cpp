#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    //freopen("input.txt", "r", stdin);
    int len, k, ma = -1, mi = 1000, x;
    scanf("%d %d", &len, &k);
    for(int i = 0; i < len; scanf("%d", &x), v.push_back(x), ma = max(ma, x), mi = min(mi, x), i++);
    if(ma - mi <= k){
        printf("YES\n");
        for(int i = 0; i < len; i++){
            for(int j = 0; j < k; j++){
                int p = v[i] / k;
                if(v[i] % k >= j + 1) p++;
                for(int k = 0; k < p; k++){
                    printf("%d ", j + 1);
                }
            }
            printf("\n");
        }
    }else printf("NO\n"); // :)
    return 0;
}
