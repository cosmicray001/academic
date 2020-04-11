#include <bits/stdc++.h>
#define le 1000006
using namespace std;
int n[le >> 6];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
}
int main(){
    se();
    int a;
    cin >> a;
    if(a == 1){
        printf("3\n");
        return 0;
    }
    for(int i = 1; i < le; i++){
        if((a * i + 1) % 2 == 0){
            printf("%d\n", i);
            return 0;
        }
        else if(ck(a * i + 1)){
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
