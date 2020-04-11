#include <bits/stdc++.h>
#define le 303
#define ll long long int
using namespace std;
double n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, x;
    double y;
    for(scanf("%d", &t); t--; ){
        for(int i = 0; i < le; n[i] = 0, i++);
        char ch;
        for(scanf("%d", &x); x--; ){
            cin >> ch >> y;
            n[(int)ch] = y;
        }
        string s;
        double sum = 0.0;
        for(scanf("%d", &x), getline(cin, s); x--; ){
            getline(cin, s);
            for(int i = 0; i < s.size(); sum += n[s[i]], i++);
        }
        printf("%.2lf$\n", sum / 100.0);
    }
    return 0;
}
