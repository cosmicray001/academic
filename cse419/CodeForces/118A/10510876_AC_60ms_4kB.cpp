#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string ss;
    getline(cin, ss);

    int len = ss.size();
    for(int i = 0; i < len; i++){
        if((ss[i] != 'A' && ss[i] != 'E' && ss[i] != 'I' && ss[i] != 'O' && ss[i] != 'U' && ss[i] != 'Y') && (ss[i] >= 'A' && ss[i] <= 'Z')){
            printf(".%c", (ss[i] - 'A') + 'a');
        }
        else if((ss[i] != 'a' && ss[i] != 'e' && ss[i] != 'i' && ss[i] != 'o' && ss[i] != 'u' && ss[i] != 'y') && (ss[i] >= 'a' && ss[i] <= 'z')) printf(".%c", ss[i]);

    }
    printf("\n");

    return 0;
}
