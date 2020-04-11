#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && c != 0) cout << '?' << endl;
    else if(a == b && c == 0) cout << '0' << endl;
    else if(a > b){
        if(a > b + c) cout << '+' << endl;
        else cout << '?' << endl;
    }
    else{
        if(b > a + c) cout << '-' << endl;
        else cout << '?' << endl;
    }
    return 0;
}
