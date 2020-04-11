#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    string s;
    for(scanf("%d", &t), getline(cin, s); t--; ){
        getline(cin, s);
        int sum = 0;
        for(int i = 0; i < s.size(); i++) sum += s[i] - '0';
        printf("%d\n", sum);
    }
    return 0;
}