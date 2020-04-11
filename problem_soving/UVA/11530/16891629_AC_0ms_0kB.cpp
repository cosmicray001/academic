#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    getline(cin, s);

    for(int i = 1; i <= t; i++){
        getline(cin, s);
        int len = s.size();
        int c = 0;
        for(int j = 0; j < len; j++){
                 if(s[j] == 'a' || s[j] == 'd' || s[j] == 'g' || s[j] == 'j' || s[j] == 'm' || s[j] == 'p' || s[j] == 't' || s[j] == 'w' || s[j] == ' ') c += 1;
            else if(s[j] == 'b' || s[j] == 'e' || s[j] == 'h' || s[j] == 'k' || s[j] == 'n' || s[j] == 'q' || s[j] == 'u' || s[j] == 'x' ) c += 2;
            else if(s[j] == 'c' || s[j] == 'f' || s[j] == 'i' || s[j] == 'l' || s[j] == 'o' || s[j] == 'r' || s[j] == 'v' || s[j] == 'y' ) c += 3;
            else if(s[j] == 's' || s[j] == 'z') c += 4;

        }
        printf("Case #%d: %d\n", i, c);
    }

    return 0;
}