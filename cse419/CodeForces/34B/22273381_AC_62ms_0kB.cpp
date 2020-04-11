#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    int sum=0,e;
    for(int i=0;i<n;i++){
        cin>>e;
        v.push_back(e);
    }
    for(int j=0;j<m;j++){
    int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin();
    int minElement = *std::min_element(v.begin(), v.end());
    if(minElement<0){
    sum+=minElement;
    }
    v.erase(v.begin() + minElementIndex);


    //cout<<v.at(minElementIndex)<<endl;
    }
    if(sum<0){
        sum=sum*-1;
    }
    cout<<sum<<endl;
    return 0;
}