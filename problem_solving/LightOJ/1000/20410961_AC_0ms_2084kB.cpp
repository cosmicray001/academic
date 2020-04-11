#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t, co = 0;
	ll a, b;
	for(scanf("%d", &t); t--; ){
		scanf("%lld %lld", &a, &b);
		printf("Case %d: %lld\n", ++co, a + b);
	}
	return 0;
}