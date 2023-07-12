long long int findpainter(int arr[], long long int lim, int n) {
        
        long long int painter=1,sum=0;
        for(int i=0; i<n; ++i) {
            sum+=arr[i];
            if(sum>lim) {
                sum=arr[i];
                painter++;
            }
        }
        return painter;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long int l=-1e18,r=0;
        for(int i=0; i<n; ++i) {
            l=max(l,(long long int) arr[i]);
            r+=arr[i];
        }
        while(l<=r) {
           long long int m=l+(r-l)/2;
           long long int ans=findpainter(arr,m,n);
           if(ans>k) {
               l=m+1;
           }
           else {
               r=m-1;
           }
        }
        return l;
    }
