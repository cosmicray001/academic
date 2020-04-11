    #include <bits/stdc++.h>
    #define le 100010
     
    using namespace std;
    int n[le];
     
    int fnc_lo(int a[], int len, int key){
      int hi = len - 1, lo = 0, index = -1, mid;
      while(lo <= hi){
        mid = (lo + hi) / 2;
        if(key == a[mid]){
          index = mid;
          hi = mid - 1;
        }
        else if(key < a[mid]) hi = mid - 1;
        else lo = mid + 1;
      }
      return lo;
    }
     
    int fnc_up(int a[], int len, int key){
      int hi = len - 1, lo = 0, index = -1, mid;
      while(lo <= hi){
        mid = (hi + lo) / 2;
        if(key == a[mid]){
          index = mid;
          lo = mid + 1;
        }
        else if(key < a[mid]) hi = mid - 1;
        else lo = mid + 1;
      }
      return lo;
    }
     
    int main()
    {
      int t, co = 0;
      int len, x, y, q;
      scanf("%d", &t);
      while(t--){
        scanf("%d %d", &len, &q);
        for(int i = 0; i < len; i++) scanf("%d", &n[i]);
        printf("Case %d:\n", ++co);
        while(q--){
          scanf("%d %d", &x, &y);
          x = fnc_lo(n, len, x);
          y = fnc_up(n, len, y);
          y  -= x;
          printf("%d\n", y);
        }
      }
     
      return 0;
    }
