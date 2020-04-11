#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char ch[10];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%s", ch);
        int len = strlen(ch);

        if(len == 5) printf("%d\n", 3);
        else{
            if(ch[0] == 'o' && (ch[1] == 'n' || ch[2] == 'e')) printf("%d\n", 1);
            else if(ch[1] == 'n' && (ch[2] == 'e' || ch[0] == 'o')) printf("%d\n", 1);
            else if(ch[2] == 'e' && (ch[0] == 'o' || ch[1] == 'n')) printf("%d\n", 1);
            else if(ch[0] == 't' && (ch[1] == 'w' || ch[2] == 'o')) printf("%d\n", 2);
            else if(ch[1] == 'w' && (ch[2] == 'o' || ch[0] == 't')) printf("%d\n", 2);
            else if(ch[2] == 'o' && (ch[0] == 't' || ch[1] == 'w')) printf("%d\n", 2);
        }
    }

    return 0;
}