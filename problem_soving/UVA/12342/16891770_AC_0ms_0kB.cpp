#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    double tk;
    for(int i = 1; i <= t; i++){
       scanf("%lf", &tk);
       double tax = 0;
       double s5 = 0, s4 = 0, s3 = 0, s2 = 0, s1 = 0;
       for(; tk > 180000; ){
            if(tk > 1180000){
                s5 = tk - 1180000;
                tk = 1180000;
            }

           else if(tk > 880000){
            s4 = tk - 880000;
            tk = 880000;
           }
           else if(tk > 480000){
            s3 = tk - 480000;
            tk = 480000;
           }
           else if(tk > 180000){
            s2 = tk - 180000;
            tk = 180000;
           }
       }
       tax = ((s2 * 10.0) / 100.0 + (s3 * 15.0) / 100.0 + (s4 * 20.0) / 100.0 + (s5 * 25.0) / 100.0);
       //int tax1 = (int)tax;
       if(tax > 0 && tax < 2000) printf("Case %d: %d\n", i, 2000);
       else printf("Case %d: %0.0lf\n", i, ceil(tax));
    }

    return 0;
}