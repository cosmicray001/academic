#include <bits/stdc++.h>
#define le 100000008
using namespace std;
bool n[le >> 1];

void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2){
        if(!n[i >> 1]) for(int j = i * i, k = i << 1; j < le; j += k) n[j >> 1] = 1;
    }
    printf("2\n");
    int c = 0;
    for(int i = 3; i < le; i += 2){
        if(!n[i >> 1]) c++;
        if(c == 100){
            printf("%d\n", i);
            c = 0;
        }
    }
}
int main(){
    se();
}
