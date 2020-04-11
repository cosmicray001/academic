#include <bits/stdc++.h>
#define le 100000008
using namespace std;
int n[le >> 6];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    se();
    char s[22];
    while(scanf("%s", s) != EOF){
        int sum = 0;
        for(int i = 0; i < strlen(s); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') sum += (s[i] - 'A' + 27);
            else if(s[i] >= 'a' && s[i] <= 'z') sum += (s[i] - 'a' + 1);
        }
        printf("%s\n", ((sum % 2 != 0 && !ck(sum)) || sum == 2 || sum == 1) ? "It is a prime word." : "It is not a prime word.");
    }
    return 0;
}