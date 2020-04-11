#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string ss;
    int t;
    scanf("%d", &t);
    getline(cin, ss);
    int sum = 0;
    for(int i = 0; i < t; i++){
        getline(cin, ss);
        if(ss[1] == '+') sum += 1;
        else if(ss[1] == '-') sum -= 1;

    }
    printf("%d\n", sum);

    return 0;
}
