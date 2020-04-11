#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0;
    while(scanf("%d", &t) != EOF){
        int n1 = 0, n2 = 0;
        for(int i = 0; i < t; i++){
            scanf("%d %d", &n1, &n2);
            printf("%d\n", n1 + n2);
        }
    }

    return 0;
}
