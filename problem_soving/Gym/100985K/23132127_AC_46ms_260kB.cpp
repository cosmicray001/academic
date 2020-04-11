#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int ans = 0, idx = 0;
	for(int i = 0; i < s.size(); i = idx){
		char ch = s[i];
		while(s[idx] == ch){
			ans++;
			idx++;
		}
		printf("%c%d", ch, ans);
		ans = 0;
	}
	return 0;
}