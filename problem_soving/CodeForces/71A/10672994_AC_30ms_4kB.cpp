#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    string s;
    scanf("%d", &t);
    getline(cin, s);
    for(int i = 0; i < t; i++){
        getline(cin, s);
        int len = s.size();

        if(len <= 10) cout << s << endl;
        else{
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        }
    }

    return 0;
}
