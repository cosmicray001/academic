#include<bits/stdc++.h>

using namespace std;

int main(){
	int t = 0,n = 0,m = 0,k = 0;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &n, &m, &k);
		int ans=abs(n-m);
		ans-=k;
		if(ans<0)
		ans=0;
		printf("%d\n", ans);
	}
    return 0;
}
