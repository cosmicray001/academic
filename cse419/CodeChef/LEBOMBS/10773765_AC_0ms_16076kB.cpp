#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char s[1010];
    scanf("%d", &t);
    //getline(cin, s);
    while(t--){
        int n;
        scanf("%d", &n);
        cin.ignore();
        //for(int c = 0; c < n; c++){
            cin >> s;
            int len = strlen(s), sum = 0;
            if(len == 1){
                if(s[0] - '0' == 0) sum++;
            }
            else{
                if(s[0] - '0' == 0 && s[1] - '0' == 0) sum++;
                for(int i = 1; i < len - 1; i++){
                    if(s[i] - '0' == 0 && s[i - 1] - '0' == 0 && s[i + 1] - '0' == 0) sum++;
                }
                if(s[len - 1] - '0' == 0 && s[len - 2] - '0' == 0) sum++;
            }
            printf("%d\n", sum);
        //}
    }

    return 0;
}
