#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, n, ans = 0;
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= n; i++){
        if(i - 1 >= a && n - i <= b) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
