#include <bits/stdc++.h>
#define le 7
using namespace std;
int n[le][le];
bool vis[le][le];
int dis[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
int bfs(int a, int b){
    vis[a][b] = true;
    dis[a][b] = 0;
    queue<pair<int, int> > q;
    q.push(make_pair(a, b));
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int py = p.first + fy[i], px = p.second + fx[i];
            if(py >= 0 && py < 5 && px >= 0 && px < 5 && vis[py][px] == false){
                vis[py][px] = true;
                dis[py][px] = dis[p.first][p.second] + 1;
                if(py == 2 && px == 2) return dis[py][px];
                q.push(make_pair(py, px));
            }
        }
    }
    return 0;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int r = 5, c = 5, a, b, x;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &x);
            n[i][j] = x;
            if(x == 1){
                a = i;
                b = j;
            }
        }
    }
    printf("%d\n", bfs(a, b));
    return 0;
}
