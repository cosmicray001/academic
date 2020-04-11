#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int>t;
    bool check = true;
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        if(v==100){
            if(t[50]>=1 && t[25]>=1){
                t[50]--;
                t[25]--;
            }
            else if(t[25]>=3){
                t[25]-=3;
            }
            else{
               cout<<"NO"<<endl;
               check=false;
               break;
              }
            }
        else if(v==50){
            if(t[25]>=1){
                t[50]++;
                t[25]--;
            }
            else{
                cout<<"NO"<<"\n";
                check=false;
                break;
            }
        }
        else{
            t[25]++;
        }
    }
        if(check){
            cout<<"YES"<<endl;
        }
    return 0;
}