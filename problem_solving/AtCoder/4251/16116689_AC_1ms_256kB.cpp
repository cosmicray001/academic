#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, x, y, z;
    scanf("%d %d %d", &a, &b, &c);
    x = max(a, max(b, c));
    y = min(a, min(b, c));
    z = (a + b + c) - (x + y);
    printf("%d\n", x * 10 + y + z);
    return 0;
}
