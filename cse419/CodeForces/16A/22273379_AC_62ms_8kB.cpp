#include <bits/stdc++.h>

using namespace std;

bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;

    return true;
}


int main()
{
    int n,m;
    bool iso=true;
    cin>>n>>m;
    string s,temp;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(allCharactersSame(s)== false){
            iso=false;
        }
        if(i!=0){
            if(s==temp){
                iso=false;
            }
        }
        temp = s;
    }
    if(iso)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }

    return 0;
}