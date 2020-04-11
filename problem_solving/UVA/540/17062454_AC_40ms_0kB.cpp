#include <bits/stdc++.h>
#define le 1001
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, len, x, a, b;
    char ch[10];
    while(scanf("%d", &t) != EOF && t){
        printf("Scenario #%d\n", ++co);
        map<int, int> mp;
        queue<int> q[le];
        queue<int> q1;
        for(int i = 0; i < t; i++) for(scanf("%d", &len); len--; scanf("%d", &x), mp[x] = i);
        while(scanf("%s", ch) != EOF && ch[0] != 'S'){
            if(ch[0] == 'E'){
                scanf("%d", &a);
                if(q[mp[a]].empty()) q1.push(mp[a]);
                q[mp[a]].push(a);
            }
            else{
                printf("%d\n", q[q1.front()].front());
                q[q1.front()].pop();
                if(q[q1.front()].empty()) q1.pop();
            }
        }
        printf("\n");
    }
    return 0;
}
