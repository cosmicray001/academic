#include <bits/stdc++.h>
#define le 13
using namespace std;
int n[le];
void fnc(int a){
	for(; a > 0; a /= 10) n[a % 10]++;
}
int main(){
	int t, a;
	for(scanf("%d", &t); t--; ){
		memset(n, 0, sizeof(n));
		scanf("%d", &a);
		for(int i = 1; i < a + 1; i++){
			fnc(i);
		}
		for(int i = 0; i < 9; i++){
			printf("%d ", n[i]);
		}
		printf("%d\n", n[9]);
	}
	return 0;
}