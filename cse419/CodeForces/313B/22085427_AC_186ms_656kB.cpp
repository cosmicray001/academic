#include <bits/stdc++.h>
#define le 100005
using namespace std;
int arr[le];
int main()
{
    string s;
    cin >> s;
    for(int i = 0, j = 1; i < s.size() - 1; i++, j++){
      if(s[i] == s[i + 1]) arr[j] = arr[j - 1] + 1;
      else arr[j] = arr[j - 1];
    }
    int t, a, b;
    for(scanf("%d", &t); t--; ){
      scanf("%d %d", &a, &b);
      printf("%d\n", arr[b - 1] - arr[a - 1]);
    }
    return 0;
}