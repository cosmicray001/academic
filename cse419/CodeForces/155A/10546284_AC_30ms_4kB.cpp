#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    int max_ve, min_ve, n, c = 0;
    scanf("%d", &t);

    scanf("%d", &n);
    max_ve = n;
    min_ve = n;
    for(int i = 1; i < t; i++){
        scanf("%d", &n);

        if(max_ve < n){
            max_ve = n;
            c += 1;
        }
        else if(min_ve > n){
            min_ve = n;
            c += 1;

        }
    }
    printf("%d\n", c);

    return 0;
}
