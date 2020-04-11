#include <bits/stdc++.h>
#define le 1000005
#define ll long long int
using namespace std;
int main(){
    int t;
    string s;
    scanf("%d", &t);
    getline(cin, s);
    while(t--){
        ll sum = 0;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            sum = sum + s[i] - '0';
        }
        printf("%d\n", sum);
    }
    return 0;
}
