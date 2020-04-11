#include <bits/stdc++.h>
#include <string.h>


using namespace std;

int acc_fnc(char s[110], int i){

    switch(s[i]){
    case 'a':
        return 1;
        break;
    case 'b':
        return 2;
        break;
    case 'c':
        return 3;
        break;
    case 'd':
        return 1;
        break;
    case 'e':
        return 2;
        break;
    case 'f':
        return 3;
        break;
    case 'g':
        return 1;
        break;
    case 'h':
        return 2;
        break;
    case 'i':
        return 3;
        break;
    case 'j':
        return 1;
        break;
    case 'k':
        return 2;
        break;
    case 'l':
        return 3;
        break;
    case 'm':
        return 1;
        break;
    case 'n':
        return 2;
        break;
    case 'o':
        return 3;
        break;
    case 'p':
        return 1;
        break;
    case 'q':
        return 2;
        break;
    case 'r':
        return 3;
        break;
    case 's':
        return 4;
        break;
    case 't':
        return 1;
        break;
    case 'u':
        return 2;
        break;
    case 'v':
        return 3;
        break;
    case 'w':
        return 1;
        break;
    case 'x':
        return 2;
        break;
    case 'y':
        return 3;
        break;
    case 'z':
        return 4;
        break;
    case ' ':
        return 1;
        break;

    }
}

int main(void)
{
    int t;
    char ch[110];
    scanf("%d", &t);
    gets(ch);
    for(int i = 1; i <= t; i++){
        gets(ch);
        int len = strlen(ch);
        int need_ty = 0;

        for(int c = 0; c < len; c++){
            need_ty += acc_fnc(ch, c);
        }
        printf("Case #%d: %d\n", i, need_ty);
    }

    return 0;
}
