#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool fnc(ll a){
	if(a == 2) return true;
	if(a == 1 || a % 2 == 0) return false;
	for(ll i = 3; i < sqrt(a) + 1; i += 2){
		if(a % i == 0) return false;
	}
	return true;
}
int main(){
	int t;
	ll a, b;
	for(scanf("%d", &t); t--; ){
		scanf("%lld %lld", &a, &b);
		for(ll i = a; i < b + 1; i++){
			if(fnc(i)) printf("%lld\n", i);
		}
		printf("\n");
	}
	return 0;
}