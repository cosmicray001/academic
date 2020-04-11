#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll a, b;
	int t, co = 0;
	for(scanf("%d", &t); t--; ){
		scanf("%lld %lld", &a, &b);
		printf("Case %d: %lld\n", ++co, (a / 2) * b);
	}
	return 0;
}