#include <bits/stdc++.h>
#define le 102
using namespace std;
char n[le][le];
vector<pair<int, int> > ans;
bool vis[le][le];
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
void bfs(int a, int b, int r, int c){
    vis[a][b] = true;
    queue<pair<int, int> > q;
    q.push(make_pair(a, b));
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int py = p.first + fy[i], px = p.second + fx[i];
            if(py >= 0 && py < r && px >= 0 && px < c && vis[py][px] == false && n[py][px] != '.'){
                vis[py][px] = true;
                q.push(make_pair(py, px));
            }
        }
    }
}
int main(){
    //freopen("input.txt", "r", stdin);
    int t, r, c = 0;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &r);
        string s;
        for(int i = 0; i < r; i++){
            cin >> s;
            for(int j = 0; j < r; j++){
                n[i][j] = s[j];
                if(s[j] == 'x') ans.push_back(make_pair(i, j));
            }
        }
        int co = 0;
        for(int i = 0; i < le; i++) for(int j = 0; j < le; vis[i][j] = false, j++);
        for(int i = 0; i < ans.size(); i++){
            int a = ans[i].first;
            int b = ans[i].second;
            if(vis[a][b] == false){
                co++;
                bfs(a, b, r, r);
            }
        }
        printf("Case %d: %d\n", ++c, co);
        ans.clear();
    }
    return 0;
}
