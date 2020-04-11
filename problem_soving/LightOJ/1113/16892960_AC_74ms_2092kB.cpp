#include <bits/stdc++.h>
#define le 100005
#define ll long long
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w",stdout);
    int t, co = 0;
    for(scanf("%d", &t); t--; ){
        printf("Case %d:\n", ++co);
        stack<string> b;
        stack<string> f;
        string s;
        char ch[10];
        b.push("http://www.lightoj.com/");
        while(scanf("%s", ch)){
            if(ch[0] == 'Q') break;
            else if(ch[0] == 'V'){
                getchar();
                getline(cin, s);
                cout << s << endl;
                b.push(s);
                while(!f.empty()) f.pop();
            }
            else if(ch[0] == 'B'){
                if(b.size() >= 2){
                    f.push(b.top());
                    b.pop();
                    cout << b.top() << endl;
                }
                else printf("Ignored\n");
            }
            else if(ch[0] == 'F'){
                if(f.empty()) printf("Ignored\n");
                else{
                    cout << f.top() << endl;
                    b.push(f.top());
                    f.pop();
                }
            }
        }
    }
    return 0;
}