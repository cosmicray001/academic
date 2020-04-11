#include <bits/stdc++.h>
using namespace std;
vector<int> v;
map<int, int> mp;
map<int, bool> vis;
int main(){
    //freopen("input.txt", "r", stdin);
    int a;
    while(scanf("%d", &a) != EOF){
        mp[a]++;
        if(mp[a] < 2) v.push_back(a);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " " << mp[v[i]] << endl;
    }
    return 0;
}
