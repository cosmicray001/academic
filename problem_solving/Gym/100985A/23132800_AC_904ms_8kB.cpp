#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long int a, b;
	for(scanf("%d", &t); t--; ){
		cin >> a >> b;
		printf("%s\n", (__gcd(a, b) > 1) ? "Sim" : "Nao");
	}
	return 0;
}