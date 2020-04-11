/******************************************************************
***   Problem Setter: Rezaul Alam Chowdhury                     ***
***   Uva Problem No: 10179                                     ***
***   Problem Name  : Irreducable Basic Fractions               ***
***   Type          : Number theory,elur phi/totient function   ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_HIDDEN                               ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <list>
#include <set>
#include <map>
using namespace std;
 
#define pf printf
#define ll long long
#define pi 2*acos(0.0)
#define ull unsigned long long
#define all(v) v.begin(),v.end()
 
#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t);
#define ssii(a,b) scanf("%d%d",&a,&b);
#define ssll(a,b) scanf("%lld%lld",&a,&b);
 
 
#define ff first
#define se second
#define eps 1e-9
#define inf (1<<30)                                            //infinity value
#define pb push_back
#define mod  1000000007
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                       //count one
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
 
template<typename T>inline void extended_euclid(T a,T b,T &x,T &y){if(a%b==0)x=0,y=1;else{extended_euclid(b,a%b,x,y);T temp=x;x=y;y=-y*(a/b)+temp;}}
template<typename T>inline T bigmod(T b,T p,T m){if(!p)return 1;else if(!(p%2)){T x=bigmod(b,p/2,m);return x*x;}else return ((b%m)*bigmod(b,p-1,m))%m;}
 
void ASCII_Chart(){int i,j,k;pf("ASCII Chart:(30-129)n");for(int i=30;i<50;i++){for(int j=0;j<5;j++){k=i+j*20;pf("%3d---> '%c'   ",k,k);}pf("n");}}
 
int stringconvert(string s){int p;istringstream buf(s);buf>>p;return p;}
int SOD(int n){int sum=0;for(int i=1;i*i<=n;i++)sum+=(n%i)?0:((i*i==n)?i:i+n/i);return sum;}
 
 
 
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
 
ll phi(ll n)
{
 ll res=0;
 ll j;
 if (n==1) return 1;
    res=n;
    if (n%2==0)
    {
  res-=res/2;
  while (n%2==0) n/=2;
    }
    for (j=3; j*j<=n; j+=2)
 {
  if (n%j==0)
  {
   res-=res/j;
   while (n%j==0) n/=j;
  }
 }
 if (n>1) res-=res/n;
 return res;
}
 
 
int main()
{
    int n;
    while(sii(n)&&n)
    {
        cout << phi(n) << endl;
 }}