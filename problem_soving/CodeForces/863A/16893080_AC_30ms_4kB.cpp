#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    //printf("%d\n", len);
    int c = 0;
    for(int i = len - 1; i >= 0; i--){
        if(s[i] == '0') c++;
        else break;
    }

    len = len - c;
    bool sg;
    if(len == 0) sg = true;
    //printf("%d\n", len);
    int j;

    for(int i = 0, j = len - 1; i < len / 2; i++, j--){
        if(s[i] == s[j]) sg = true;
        else{
            sg = false;
            break;
        }
    }
    if(sg == true) printf("YES\n");
    else printf("NO\n");

    return 0;
}