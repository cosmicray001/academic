#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long int a, ans = 0;
	scanf("%lld", &a);
	ans = a / 2;
	if(a & 1) ans = ans - a;
	printf("%lld\n", ans);
	return 0;
}