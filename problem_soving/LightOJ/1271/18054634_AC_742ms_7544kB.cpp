#include <bits/stdc++.h>
#define le 50004
using namespace std;
int n[le], dis[le], pa[le];
vector<int> v[le];
void bfs(int a, int b){
    for(int i = 0; i < le; pa[i] = -1, dis[i] = -1, i++);
    pa[a] = a;
    dis[a] = 0;
    queue<int> q;
    q.push(a);
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int i = 0; i < v[p].size(); i++){
            int y = v[p][i];
            if(dis[y] == -1){
                dis[y] = dis[p] + 1;
                pa[y] = p;
                q.push(y);
                if(y == b) break;
            }
        }
    }
}
void pri(int a){
    if(pa[a] == a){
        printf("%d", a);
        return;
    }
    pri(pa[a]);
    printf(" %d", a);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, a, b, len;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &n[i]), i++);
        for(int i = 0; i < len - 1; i++){
            a = n[i];
            b = n[i +1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for(int i = 0; i < len; i++){
            a = n[i];
            sort(v[a].begin(), v[a].end());
            //dis[a] = -1;
        }
        printf("Case %d:\n", ++co);
        bfs(n[0], n[len - 1]);
        pri(n[len - 1]);
        printf("\n");
        for(int i = 0; i < le; v[i].clear(), i++);
    }
    return 0;
}