#include <bits/stdc++.h>
#define le 100000008
#define hii 5761467
using namespace std;
int n[le >> 6], v[hii], pos[le];
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
int fnc(int a){
    double x = sqrt(pos[a] * 2.0);
    if(floor(x + .5) < ceil(x)) return int(x);
    return ceil(x);
}
int fnc1(int a){
    int hi = 5761456, lo = 1, mid, ve, ans = fnc(a);
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(ans <= fnc(v[mid])) hi = mid - 1;
        else lo = mid + 1;
    }
    return pos[a] - lo + 1;
}
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    pos[2] = 1;
    v[1] = 2;
    for(int i = 3, j = 2; i < le; i += 2){
        if(!ck(i)){
            v[j] = i;
            pos[i] = j++;
        }
    }
}
int main(){
    se();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        if(a == 2 || (a & 1 && !ck(a))) printf("%d %d\n", fnc(a), fnc1(a));
        else printf("-1\n");
    }
    return 0;
}