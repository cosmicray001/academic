#include <bits/stdc++.h>

using namespace std;

int re_fnc(int n)
{
    int sum = 0;
    sami:{
        for(; n > 0; n /= 10){
            sum += n % 10;
        }
    }
    //printf("%d -----\n", sum);
    if(sum > 9){
        n = sum;
        sum = 0;
        goto sami;
    }

    //printf("%d -----ll\n", sum);

    return sum;
}

int main(void)
{
    string nam1, nam2;
    while(getline(cin, nam1) && getline(cin, nam2)){
        int sum1 = 0, sum2 = 0;

        int len1 = nam1.size(), len2 = nam2.size();
        for(int i = 0; i < len1; i++){
            if(nam1[i] >= 'A' && nam1[i] <= 'Z'){
                sum1 = sum1 + nam1[i] - 'A' + 1;
            }
            else if(nam1[i] >= 'a' && nam1[i] <= 'z'){
                sum1 = sum1 + nam1[i] - 'a' + 1;
            }
        }

        for(int i = 0; i < len2; i++){
            if(nam2[i] >= 'A' && nam2[i] <= 'Z'){
                sum2 = sum2 + nam2[i] - 'A' + 1;
            }
            else if(nam2[i] >= 'a' && nam2[i] <= 'z'){
                sum2 = sum2 + nam2[i] - 'a' + 1;
            }
        }

        double sum11 = re_fnc(sum1);
        //re_fnc(sum1);
        double sum22 = re_fnc(sum2);

        if(sum11 >= sum22) printf("%0.2lf %%\n", (sum22 * 100.00) / sum11);
        else printf("%0.2lf %%\n", (sum11 * 100.0) / sum22);

    }

    return 0;
}
