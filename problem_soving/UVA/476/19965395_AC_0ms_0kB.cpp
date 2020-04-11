#include <bits/stdc++.h>
using namespace std;
double n[12][6];
int main(){
    double a, b;
    int len = 0, co = 1;
    char ch;
    while(1){
        cin >> ch;
        if(ch == '*') break;
        scanf("%lf %lf %lf %lf", &n[len][0], &n[len][1], &n[len][2], &n[len][3]);
        len++;
    }
    while(scanf("%lf %lf", &a, &b) != EOF && a != 9999.9 && b != 9999.9){
        bool f = false;
        for(int i = 0; i < len; i++){
            if(a > n[i][0] && a < n[i][2] && b > n[i][3] && b < n[i][1]){
                printf("Point %d is contained in figure %d\n", co, i + 1);
                f = true;
            }
        }
        if(!f) printf("Point %d is not contained in any figure\n", co);
        co++;
    }
    return 0;
}