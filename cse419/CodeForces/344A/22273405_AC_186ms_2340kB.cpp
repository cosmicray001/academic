#include <iostream>

using namespace std;

int main()
{
    int T,v,counter=1;
    cin>>T;
    string arr[T];
    for(int i=0;i<T;i++){
        cin>>arr[i];
        if(i>0){
            if(arr[i]!=arr[i-1]){
                counter++;
            }
        }
    }
    cout<<counter<<"\n";
    return 0;
}