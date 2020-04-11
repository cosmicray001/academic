#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
	int ans = 0;
	while(a){
		a /= 2;
		ans++;
	}
	return ans;
}
int main(){
	int len, a;
	scanf("%d", &len);
	for(int i = 0; i < len; scanf("%d", &a), i++);
	printf("%d\n", fnc(len));
	return 0;
}