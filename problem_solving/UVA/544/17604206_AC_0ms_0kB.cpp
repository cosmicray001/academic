#include <bits/stdc++.h>
#define len 202
using namespace std;
int main ()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, m, co = 0;
    while ( scanf ("%d %d", &n, &m) != EOF && n && m) {
        map <string, int> mp;
        string s, s1;
        int ve, le = 1;
        int arr [len] [len];
        for ( int i = 0; i < len; i++ ) {
            for ( int j = 0; j < 205; j++ ) arr [i] [j] = -1;
            arr [i] [i] = 0;
        }
        for ( int i = 0; i < m; i++ ) {
            cin >> s >> s1 >> ve;
            if ( !mp[s] ) mp[s] = le++;
            if ( !mp[s1] ) mp[s1] = le++;

            arr[mp[s]] [mp[s1]] = ve;
            arr[mp[s1]] [mp[s]] = ve;
        }
        for ( int k = 1; k <= n; k++ ) {
            for ( int i = 1; i <= n; i++ ) {
                for ( int j = 1; j <= n; j++ )
                    arr[i] [j] = arr[j] [i] = max (arr[i] [j], min (arr[i] [k], arr[k] [j]));
            }
        }
        cin >> s >> s1;
        printf ("Scenario #%d\n", ++co);
        printf ("%d tons\n\n", arr[mp[s] ] [mp[s1]]);
    }
    return 0;
}
