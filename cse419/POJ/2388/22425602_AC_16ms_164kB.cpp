#include <iostream>
#include <stdio.h>
#include <algorithm>
#define le 10004
using namespace std;
int n[le];
int main(){
	int len;
	scanf("%d", &len);
	for(int i = 0; i < len; i++) scanf("%d", &n[i]);
	sort(n, n + len);
	printf("%d\n", n[len / 2]);
	return 0;
}