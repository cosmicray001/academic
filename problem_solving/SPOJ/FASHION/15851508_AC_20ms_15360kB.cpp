#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0,i=0;
    cin>>t;
    while(t--){
           int n;
           cin>>n;
           int x[n];
           int y[n];
           for(int j=0;j<n;j++){
            cin>>x[j];
           }
           for(int j=0;j<n;j++){
            cin>>y[j];
           }
           sort(x, x + n);
           sort(y, y + n);
           int sum=0;
           for(int k=0;k<n;k++){
            sum+=x[k]*y[k];
           }
           cout<<sum<<endl;
    }


}