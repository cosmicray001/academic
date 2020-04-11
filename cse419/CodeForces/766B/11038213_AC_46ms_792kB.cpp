#include <bits/stdc++.h>
#define len 100010

using namespace std;
long long arr[len];


int fnc(long long int n[], int ln)
{
    sort(n, n + ln);
    bool f = false;
    for(int i = 1; i < ln - 1; i++){
        if(n[i - 1] + n[i] > n[i + 1]){
            f = true;
            break;
        }
    }
    if(f) return 1;
    else return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) scanf("%lld", &arr[i]);
    int ans = fnc(arr, t);
    printf("%s\n", ans ? "YES" : "NO");

    return 0;
}
