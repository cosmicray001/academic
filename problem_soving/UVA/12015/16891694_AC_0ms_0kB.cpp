
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, string> >v;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, x, m;
    char ch[102];
    for(scanf("%d", &t); t--; ){
        m = 0;
        for(int i = 0; i < 10; i++){
            scanf("%s %d", ch, &x);
            m = max(m, x);
            v.push_back(make_pair(x, ch));
        }
        //sort(v.begin(), v.end());
        printf("Case #%d:\n", ++co);
        for(int i = 0; i < 10; i++){
            if(v[i].first == m) cout << v[i].second << endl;
        }
        v.clear();
    }
    return 0;
}