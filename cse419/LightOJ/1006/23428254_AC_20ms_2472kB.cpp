#include <bits/stdc++.h>
#define m 10000007
int n[10004];
int a, b, c, d, e, f, ve;
int fnc(int x){
	if(x == 0) return a % m;
	if(x == 1) return b % m;
	if(x == 2) return c % m;
	if(x == 3) return d % m;
	if(x == 4) return e % m;
	if(x == 5) return f % m;
	if(n[x] != -1) return n[x] % m;
	int ans = ((fnc(x - 1) % m) + (fnc(x - 2) % m) + (fnc(x - 3) % m) + (fnc(x - 4) % m) + (fnc(x - 5) % m) + (fnc(x - 6) % m)) % m;
	return n[x] = ans;
}
int main(){
	int t, co = 0;
	for(scanf("%d", &t); t--; ){
		scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &ve);
		for(int i = 0; i < 10004; n[i] = -1, i++);
		printf("Case %d: %d\n", ++co, fnc(ve) % m);
	}
	return 0;
}