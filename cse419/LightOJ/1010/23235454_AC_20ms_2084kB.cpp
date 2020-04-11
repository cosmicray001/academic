#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, co = 0, a, b;
	for(scanf("%d", &t); t--; ){
		scanf("%d %d", &a, &b);
		if(a == 1 || b == 1) printf("Case %d: %d\n", ++co, a * b);
		else if(a == 2 || b == 2){
			if(a != 2) swap(a, b);
			int r = b % 4;
			printf("Case %d: %d\n", ++co, (b % 4 == 0) ? b : (b % 4 == 1 || b % 4 == 3) ? b + 1 : b + 2);
		}
		else printf("Case %d: %d\n", ++co, (a * b + 1) / 2);
	}
	return 0;
}