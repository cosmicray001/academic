#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, len, a;
	for(scanf("%d", &t); t--; ){
		int ans = 0;
		scanf("%d", &len);
		for(int i = 0; i < len; i++){
			scanf("%d", &a);
			if(a) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}