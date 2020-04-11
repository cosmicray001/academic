 #include <bits/stdc++.h>
    using namespace std;
     
    int n,m,all;
    int in[1001];
    int mn;
    int ans_me(int x)
    {
        int sum = 0;
        int cc = 1;
        for(int i=0;i<n;i++)
        {
            if(sum+in[i] > x)
            {
                cc++;
                sum = in[i];
            }
            else sum += in[i];
        }
        return cc;
    }
     
    int b_search()
    {
        int low,high,mid,ans;
        low = mn;
        high = 1e9;
    //    printf("low is %d\n",low);
        while(low<=high)
        {
            mid = (low+high) >> 1;
            if(ans_me(mid) > m) low = mid+1;
            else
            {
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
     
    int main()
    {
    //    freopen("input.txt", "r", stdin);
    //    freopen("out.txt", "w", stdout);
        int t,qq=1;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d %d",&n,&m);
            all = 0;
            mn = 0;
            int ans;
            mn = 0;
            for(int i=0;i<n;i++) scanf("%d",&in[i]) , all += in[i] , mn = max(mn,in[i]);
            if(m<n) ans = b_search();
            else ans = mn;
            printf("Case %d: %d\n",qq++,ans);
        }
    }
     