#include <bits/stdc++.h>
using namespace std;
void fnc(int a){
	if(!a) return;
	int t = a;
	fnc(a >> 1);
	printf("%d", t % 2);
}
int main(){
	int a;
	while(scanf("%d", &a) != EOF) fnc(a), printf("\n");
	return 0;
}