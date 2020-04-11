#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, co = 0, len, n, x;
    char ch[20];
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &n);
        deque<int> de;
        printf("Case %d:\n", ++co);
        while(n--){
            scanf("%s", ch);
            if(ch[1] == 'u'){
                scanf("%d", &x);
                if(de.size() == len) printf("The queue is full\n");
                else if(ch[4] == 'L'){
                    printf("Pushed in left: %d\n", x);
                    de.push_front(x);
                }
                else{
                    printf("Pushed in right: %d\n", x);
                    de.push_back(x);
                }
            }
            else{
                if(de.size() == 0) printf("The queue is empty\n");
                else if(ch[3] == 'L'){
                    printf("Popped from left: %d\n", de.front());
                    de.pop_front();
                }
                else{
                    printf("Popped from right: %d\n", de.back());
                    de.pop_back();
                }
            }
        }
    }
    return 0;
}