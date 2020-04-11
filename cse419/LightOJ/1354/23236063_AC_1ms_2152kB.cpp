#include <bits/stdc++.h>
using namespace std;
int fnc(int a){
	if(!a) return 0;
	return (a % 2) + 10 * fnc(a / 2);
}
int main(){
	int t, co = 0;
	string s, s1;
	for(scanf("%d", &t); t--; ){
		cin >> s >> s1;
		stringstream ss(s);
		int a, b, c, d;
		char ch;
		int a1, b1, c1, d1;
		ss >> a >> ch >> b >> ch >> c >> ch >> d;
		stringstream st(s1);
		st >> a1 >> ch >> b1 >> ch >> c1 >> ch >> d1;
		printf("Case %d: %s\n", ++co, (fnc(a) == a1 && fnc(b) == b1 && fnc(c) == c1 && fnc(d) == d1) ? "Yes" : "No");
	}
	return 0;
}