#include <bits/stdc++.h>
#define le 100005
using namespace std;
int n[le];
int main(){
	int t;
	string s;
	n[0] = 0;
	cin >> s;
	for(int i = 0, j = 1; i < s.size() - 1; i++, j++){
		if(s[i] == s[i + 1]) n[j] = n[j - 1] + 1;
		else n[j] = n[j - 1];
	}
	for(scanf("%d", &t); t--; ){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", n[b - 1] - n[a - 1]);
	}
	return 0;
}