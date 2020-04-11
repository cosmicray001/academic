#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le];
int ans;
int fnc(int key, int len){
  int hi = len - 1, lo = 0, mid;
  ans = -1;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    if(key == n[mid]){
      ans = mid;
      hi = mid - 1;
    }
    else if(key < n[mid]) hi = mid - 1;
    else lo = mid + 1;
  }
  return lo;
}
int main(){
	int len, q, a, b, co = 0;
	while(scanf("%d %d", &len, &q) != EOF && (len || q)){
		printf("CASE# %d:\n", ++co);
		for(int i = 0; i < len; i++){
			scanf("%d", &n[i]);
		}
		sort(n, n + len);
		while(q--){
			scanf("%d", &a);
			int lo = fnc(a, len);
			if(ans != -1) printf("%d found at %d\n", a, lo + 1);
			else printf("%d not found\n", a);
		}
	}
	return 0;
}