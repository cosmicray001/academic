#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector<int> v;
int main(){
    //freopen("input.txt", "r", stdin);
    int a;
    while(scanf("%d", &a) != EOF) v.push_back(a);
    sort(v.begin(), v.end());
    for(int i = v.size() - 1, j = 0; i >= 0 && j < 3; i--, j++) cout << v[i] << endl;
    return 0;
}
