#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char ch[4];
    scanf("%d", &t);
    int sum = 0;
    while(t--){
        scanf("%s", ch);
        if(ch[1] == '+') sum += 1;
        else sum--;
    }
    printf("%d\n", sum);

    return 0;
}
