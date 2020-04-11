#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,a,b,c,as=0,bs=0,cs=0;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>a>>b>>c;

        as+=a;
        bs+=b;
        cs+=c;
    }
    if(as == 0 && bs == 0 && cs == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}