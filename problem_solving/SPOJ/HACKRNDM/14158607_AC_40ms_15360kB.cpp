    #include <bits/stdc++.h>
    #define le 100005
    using namespace std;
    int n[le];
    bool fnc(int key, int k, int len){
    	int hi = len - 1, lo = 0, mid;
    	while(lo <= hi){
    		mid = (lo + hi) / 2;
    		if(key + k == n[mid]) return 1;
    		else if(n[mid] > k + key) hi = mid - 1;
    		else lo = mid + 1;
    	}
    	return 0;
    }
    int main(){
    	int len, k, ans = 0;
    	scanf("%d %d", &len, &k);
    	for(int i = 0; i < len; scanf("%d", &n[i]), i++);
    	sort(n, n + len);
    	for(int i = 0; i < len; i++){
    		if(fnc(n[i], k, len)) ans++;
    	}
    	printf("%d\n", ans);
    	return 0;
    } 