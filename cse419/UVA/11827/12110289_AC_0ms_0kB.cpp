#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    getline(cin, s);
    while(t--){
        int n = 0, sum = 1;
        vector<int>v;
        getline(cin, s);
        int len = s.size();
        for(int i = 0; i < len; i++){
            if(s[i] != ' '){
                n = (n * 10) + (s[i] - '0');
            }else{
                v.push_back(n);
                n = 0;
            }
        }
        if(s[len - 1] != ' ') v.push_back(n);
        len = v.size();
        for(int i = 0; i < len - 1; i++){
            for(int j = i + 1; j < len; j++){
                int g = __gcd(v[i], v[j]);
                sum = max(sum, g);
            }
        }
        //for(int i = 0; i < len; i++) printf("%d\t", v[i]);

        printf("%d\n", sum);
    }

    return 0;
}
