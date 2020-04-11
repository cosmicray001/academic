#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int> > v;
bool comp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int len, a, b;
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
        scanf("%d %d", &a, &b);
        v.push_back(make_pair(a, b));
    }
    stable_sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++){
        printf("%d %d\n", v[i].first, v[i].second);
    }
    return 0;
}
