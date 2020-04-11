#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = a - b;
    if(ans <= 0) ans = a + b;
    cout << ans << endl;
    return 0;
}
