    #include <bits/stdc++.h>
    #define le 300110
     
    using namespace std;
    long long int n[le];
     
    int main()
    {
      long long int len;
      long long int m;
      scanf("%lld %lld", &len, &m);
      for(long long int i = 0; i < len; i++) scanf("%lld", &n[i]);
      long long int sum = 0, ve = 0;
      long long int j = 0;
      for(long long int i = 0; i < len; i++){
        sum += n[i];
        if(sum > m){
          while(j <= i){
            sum -= n[j];
            j++;
            if(sum <= m) break;
          }
        }
        ve = max(ve, sum);
      }
      printf("%lld\n", ve);
      
      return 0;
    } 