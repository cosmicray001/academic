#include <bits/stdc++.h>

using namespace std;

int fnc(int ve, char ch, int len, int k){
    if(ch == 'E' || ch == 'N') ve += k;
    else ve = abs(ve - k);
    int re = ve / len;
    ve %= len;
    if(re & 1) ve = len - ve;
    return ve;
}

int main(){
    int t, co = 0, l, w, len, k;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d %d %d", &l, &w, &len, &k);
        vector <pair <int , int> > sp;
        for(int i = 0; i < len; i++){
            int x, y;
            char ch, ch1;
            scanf("%d %d %c %c", &x, &y, &ch, &ch1);
            x = fnc(x, ch1, l, k);
            y = fnc(y, ch, w, k);
            sp.push_back(make_pair(x, y));
        }
        sort(sp.begin(), sp.end());
        printf("Case %d:\n", ++co);
        for(int i = 0; i < sp.size(); printf("%d %d\n", sp[i].first, sp[i].second), i++);
    }
    return 0;
}
