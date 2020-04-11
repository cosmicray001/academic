#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,counter1=0,counter2=0,a=0,b=0;
    cin>>x;
   for (int i=1;i<=x;i++){
        cin>>y;
    if (y%2==0){
        counter1++;a=i;}
        else{counter2++;b=i;}


   }
   if (counter1==1)cout<<a;
   else cout<<b;
    return 0;
}
