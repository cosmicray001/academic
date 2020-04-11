#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, a, b;
	for(scanf("%d", &t); t--; ){
		scanf("%d %d", &a, &b);
		if(a == b) printf("=\n");
		else if(a < b) printf("<\n");
		else printf(">\n");
	}
	return 0;
}