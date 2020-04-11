#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t, co = 0;
	ll a, b;
	for(scanf("%d", &t); t--; ){
		scanf("%lld", &a);
		b = 1;
		if(a & 1) printf("Case %d: Impossible\n", ++co);
		else{
			while(a % 2 == 0){
				b *= 2;
				a /= 2;
			}
			printf("Case %d: %lld %lld\n", ++co, a, b);
		}
	}
	return 0;
}