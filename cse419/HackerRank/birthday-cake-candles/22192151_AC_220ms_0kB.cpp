#include <bits/stdc++.h>
#define le 10000007
using namespace std;
int n[le];
int main() {
	int len, mx = -INT_MAX, a;
	scanf("%d", &len);
	for(int i = 0; i < len; i++){
		scanf("%d", &a);
		n[a]++;
		mx = max(mx, a);
	}
	printf("%d\n", n[mx]);
	return 0;
}