#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    getline(cin, s);
    for(int i = 0; i < t; i++){
        getline(cin, s);
        int len = s.size();
        int sum = 0;
        for(int j = 0; j < len; j++){
            if(s[j] == '4') sum++;
        }
        printf("%d\n", sum);
    }

    return 0;
}
