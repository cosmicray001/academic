 #include <cmath>  
 #include <cstdio>  
 #include <vector>  
 #include <iostream>  
 #include <algorithm>  
 using namespace std;  
 int main() {  
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int t;  
   cin>>t;  
   while(t--){  
     int n,k,temp,cnt=0;  
     cin>>n>>k;  
     for(int i=0;i<n;i++){  
       cin>>temp;  
       if(temp<=0){    
         cnt++;  
       }  
     }  
     if(cnt>=k){  
       cout<<"NO"<<endl;  
     }else{  
       cout<<"YES"<<endl;  
     }  
   }  
   return 0;  
 }  