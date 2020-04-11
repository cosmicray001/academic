#include <bits/stdc++.h>
#define le 105
 
using namespace std;
int n[le];
int m[le];
 
bool fnc(int key, int len){
    int hi = len - 1, lo = 0, mid;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(key == m[mid]) return 0;
        else if(key < m[mid]) hi = mid - 1;
        else lo = mid + 1;
    }
    return 1;
}
 
int main(){
    int len, len1;
    scanf("%d", &len);
    for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    scanf("%d", &len1);
    for(int i = 0; i < len1; scanf("%d", &m[i]), i++);
    bool f = false;
    for(int i = 0; i < len; i++){
        if(fnc(n[i], len1)){
            if(f) printf(" ");
            f = true;
            printf("%d", n[i]);
        }
    }
    printf("\n");
    return 0;
}