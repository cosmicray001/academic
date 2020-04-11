#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a, b, c, co = 0;
    while(scanf("%d %d", &a, &b) != EOF && a && b){
        printf("Case %d:\n", ++co);
        list<int> l;
        for(int i = 1; i <= min(a, b); l.push_back(i), i++);
        char ch[10];
        while(b--){
            scanf("%s", ch);
            if(ch[0] == 'N'){
                int temp = l.front();
                printf("%d\n", temp);
                l.pop_front();
                l.push_back(temp);
            }
            else{
                scanf("%d", &c);
                l.remove(c);
                l.push_front(c);
            }
        }
    }
    return 0;
}
