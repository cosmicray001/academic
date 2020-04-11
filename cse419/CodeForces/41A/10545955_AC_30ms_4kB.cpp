#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int len1 = s1.size(), len2 = s2.size();
    bool pass = true;

    if(len1 != len2){
        pass = false;
    }

    int j;
    for(int i = len2 - 1, j = 0; pass == true && j < len1; j++, i--){
        if(s1[j] != s2[i]){
            pass = false;
        }
    }
    if(pass == true) printf("YES\n");
    else printf("NO\n");

    return 0;
}
