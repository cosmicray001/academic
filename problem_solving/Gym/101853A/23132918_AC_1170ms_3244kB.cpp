#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];
map<int, int> mp;
int main(){
	int t, len, q, a, b;
	for(scanf("%d", &t); t--; ){
		int ans = 0;
		scanf("%d %d", &len, &q);
		for(int i = 0; i < len; i++){
			scanf("%d", &a);
			n[i] = a;
			if(mp[a] == 0 && a != 0) ans++;
			mp[a]++;
		}
		while(q--){
			scanf("%d", &a);
			if(a == 1){
				int x, y;
				scanf("%d %d", &x, &y);
				b = n[x - 1];
				if(mp[y] == 0 && y != 0) ans++;
				mp[y]++;
				mp[b]--;
				if(mp[b] == 0 && b != 0) ans--;
				n[x - 1] = y;
			}
			else printf("%d\n", ans);
		}
		mp.clear();
	}
	return 0;
}