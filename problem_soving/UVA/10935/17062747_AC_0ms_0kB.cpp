#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    while(scanf("%d", &n) != EOF && n){
        if(n == 1){
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
        }
        else{
            deque<int> de;
            for(int i = n; i > 0; de.push_front(i), i--);
            printf("Discarded cards: 1");
            for(int i = 1; i < n; i++){
                if(i != 1){
                    printf(", %d", de.front());
                    de.pop_front();
                    int t = de.front();
                    de.pop_front();
                    de.push_back(t);
                }
                else{
                    de.pop_front();
                    int t = de.front();
                    de.pop_front();
                    de.push_back(t);
                }
            }
            printf("\nRemaining card: %d\n", de.front());
        }
    }
    return 0;
}
