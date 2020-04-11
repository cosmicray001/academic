#include <bits/stdc++.h>
using namespace std;
double n[12][6];
bool fnc(double a, double b, double x, double y, double r){
    a -= x;
    b -= y;
    double dis = (a * a) + (b * b);
    if(dis < r * r) return 1;
    return 0;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double a, b;
    int len = 0, co = 1;
    char ch;
    while(1){
        cin >> ch;
        if(ch == '*') break;
        else if(ch == 'r'){
            n[len][0] = 1;
            scanf("%lf %lf %lf %lf", &n[len][1], &n[len][2], &n[len][3], &n[len][4]);
        }
        else{
            n[len][0] = 0;
            scanf("%lf %lf %lf", &n[len][1], &n[len][2], &n[len][3]);
        }
        len++;
    }
    while(scanf("%lf %lf", &a, &b) != EOF && a != 9999.9 && b != 9999.9){
        bool f = false;
        for(int i = 0; i < len; i++){
            if(n[i][0]){
                if(a > n[i][1] && a < n[i][3] && b > n[i][4] && b < n[i][2]){
                    printf("Point %d is contained in figure %d\n", co, i + 1);
                    f = true;
                }
            }else{
                if(fnc(a, b, n[i][1], n[i][2], n[i][3])){
                    printf("Point %d is contained in figure %d\n", co, i + 1);
                    f = true;
                }
            }
        }
        if(!f) printf("Point %d is not contained in any figure\n", co);
        co++;
    }
    return 0;
}
