#include <bits/stdc++.h>
#define read freopen("input.txt", "r", stdin);
using namespace std;
bool n[102];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, len;
    char ch[7], ch1[7];
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        int ans = 0, x;
        for(int i = 0; i < len; i++){
            scanf("%s", ch);
            if(ch[0] == 'L'){
                ans--;
                n[i + 1] = false;
            }
            else if(ch[0] == 'R'){
                ans++;
                n[i + 1] = true;
            }
            else{
                scanf("%s %d", ch, &x);
                if(n[x]) ans++;
                else ans--;
                n[i + 1] = n[x];
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}