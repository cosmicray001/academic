#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	for(int ll = 0; ll < n; ll++)
	{
		char a[1010];
		scanf("%s",a);
		int len = strlen(a);
		char ch;
		if(len <= 2){
            ch = '+';
            printf("%c\n", ch);
		}
		else if(a[len - 1] == '5'&&a[len - 2] == '3'){
            ch = '-';
            printf("%c\n", ch);
		}
		else if(a[0] == '9' && a[len - 1] == '4'){
            ch = '*';
            printf("%c\n", ch);
		}
		else if(a[0] == '1' && a[1] == '9' && a[2] == '0'){
            ch = '?';
            printf("%c\n", ch);
		}
	}
	return 0;
}
