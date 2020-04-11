#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> v;
vector<int> u;
ll fnc1(int ve){
    ll p = 1, sum = 0;
    for(int i = u.size() - 1; i >= 0; i--){
        sum += (u[i] * p);
        p *= ve;
    }
    return sum;
}
ll fnc(int ve){
    ll p = 1, sum = 0;
    for(int i = v.size() - 1; i >= 0; i--){
        sum += (v[i] * p);
        p *= ve;
    }
    return sum;
}
int main(){
    int a, b, a1, b1, x;
    scanf("%d %d", &a, &a1);
    for(int i = 0; i < a; scanf("%d", &x), v.push_back(x), i++);
    scanf("%d %d", &b, &b1);
    for(int i = 0; i < b; scanf("%d", &x), u.push_back(x), i++);
    ll sum = fnc(a1), sum1 = fnc1(b1);
    if(sum == sum1) printf("=\n");
    else if(sum < sum1) printf("<\n");
    else printf(">\n");
    return 0;
}
