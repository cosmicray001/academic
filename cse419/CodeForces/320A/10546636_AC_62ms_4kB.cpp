#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    getline(cin, s);

    bool q = true;
    if(s[0] - '0' != 1) q = false;
    //else q = false;
    long long int len = s.size();
    for(long long int i = 1; q == true && i < len; i++){
        if(s[i] - '0' == 1){
            q = true;
        }
        else if(s[i] - '0' == 4){
            if((i >= 2 && (s[i - 1] - '0' == 1 || s[i - 2] - '0' == 1)) || (i == 1 && (s[i - 1] - '0' == 1))){
                q = true;
            }
            else{
                q = false;
            }
        }
        else{
            q = false;
        }
    }
    if(q == true) printf("YES\n");
    else if(q == false) printf("NO\n");

    return 0;
}
