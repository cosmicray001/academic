#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    int len = s.size();
    bool sg = false;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            sg = true;
            break;
        }
    }
    if(sg == true) printf("YES\n");
    else printf("NO\n");

    return 0;
}
