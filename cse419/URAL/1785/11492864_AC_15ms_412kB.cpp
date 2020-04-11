#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    while(scanf("%d", &n) != EOF){
        string s;
        if(n >= 1 && n <= 4){
            s = "few";
            cout << s << endl;
        }
        else if(n >= 5 && n <= 9){
            s = "several";
            cout << s << endl;
        }
        else if(n >= 10 && n <= 19){
            s = "pack";
            cout << s << endl;
        }
        else if(n >= 20 && n <= 49){
            s = "lots";
            cout << s << endl;
        }
        else if(n >= 50 && n <= 99){
            s = "horde";
            cout << s << endl;
        }
        else if(n >= 100 && n <= 249){
            s = "throng";
            cout << s << endl;
        }
        else if(n >= 250 && n <= 499){
            s = "swarm";
            cout << s << endl;
        }
        else if(n >= 500 && n <= 999){
            s = "zounds";
            cout << s << endl;
        }
        else if(n >= 1000){
            s = "legion";
            cout << s << endl;
        }
    }

    return 0;
}