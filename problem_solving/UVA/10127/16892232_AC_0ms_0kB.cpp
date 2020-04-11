#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        int temp = 1, i = 1;
        for(; temp % a != 0; temp = (temp * 10) + 1, temp %= a, i++);
        printf("%d\n", i);
    }
    return 0;
}