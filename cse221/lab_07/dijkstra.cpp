#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector<int> v[le];
vector<int> cost[le];
int vis[le], dis[le], par[le], n, e;
void pri_par(int a){
    if(par[a] == -1) {
        printf("Path: %d ", a);
        return;
    }
    pri_par(par[a]);
    printf("--> %d ", a);
}
void dijkstra(int s){
    for(int i = 0; i < le; dis[i] = INT_MAX, i++);
    priority_queue<int, vector<int>, greater<int> >q;
    q.push(s);
    dis[s] = 0;
    par[s] = -1;
    while(!q.empty()){
        int u = q.top();
        q.pop();
        for(int i = 0; i < v[u].size(); i++){
            int ve = v[u][i];
            if(dis[u] + cost[u][i] < dis[ve]){
                dis[ve] = dis[u] + cost[u][i];
                par[ve] = u;
                q.push(ve);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("Node: %d\tCost: %d\n", i, dis[i]);
        pri_par(i);
        printf("\n\n");
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    int x, y, z;
    scanf("%d %d", &n, &e);
    for(int i = 0; i < e; scanf("%d %d %d", &x, &y, &z), v[x].push_back(y), v[y].push_back(x), cost[x].push_back(z), cost[y].push_back(z), i++);
    dijkstra(0);
    return 0;
}
