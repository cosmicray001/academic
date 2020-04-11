#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[5];
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++) scanf("%d", &n[j]);
        sort(n, n + 3);
        printf("%s\n", (n[0] + n[1] > n[2]) ? "OK" : "Wrong!!");
    }
    return 0;
}
