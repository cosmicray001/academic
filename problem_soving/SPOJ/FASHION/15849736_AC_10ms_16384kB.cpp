#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

int test;
cin>>test;


for(int i=0;i<test;i++){
     
     int n;
    int sum = 0;
    cin>>n;
   int x[n];
   int y[n];
    
    for(int i=0;i<n;i++){
    	cin>>x[i];

    }
 
       for(int i=0;i<n;i++){
    	cin>>y[i];
     }
 //sum = 0;
 sort(x, x + n);
 sort(y, y + n);
 for(int i=0;i<n;i++){
   
   int prod = x[i]*y[i];
    sum = sum + prod;

 }
 cout<<sum<<endl;
}


	return 0;
}