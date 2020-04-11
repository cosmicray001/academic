#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string ss;
    scanf("%d", &t);
    getline(cin, ss);

    for(int i = 0; i < t; i++){
        getline(cin, ss);

        int len = ss.size();

        if(len <= 10) cout<<ss<<endl;
        else printf("%c%d%c\n", ss[0], len - 2, ss[len - 1]);

    }

    return 0;
}
