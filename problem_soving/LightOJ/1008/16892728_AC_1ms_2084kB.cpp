#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, i = 0;
    double n;
    scanf("%d", &t);
    while(t--){
        double col, row;
        scanf("%lf", &n);
        double root = ceil(sqrt(n));
        double pre_po = n - pow(root - 1, 2);
        if((int)root % 2 == 0){
            if(root > pre_po){
                col = pre_po;
                row = root;
            }
            else{
                col = root;
                row = 1 + pow(root, 2) - n;
            }
        }
        else{
            if(root > pre_po){
                col = root;
                row = pre_po;
            }
            else{
                row = root;
                col = 1 + pow(root, 2) - n;
            }
        }
 
        printf("Case %d: %0.0lf %0.0lf\n", ++i, col, row);
    }
 
    return 0;
}