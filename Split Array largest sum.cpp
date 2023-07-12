
    
    bool isPossible(int A[], int N, int M,int mid){
        int sum=0;
        int cnt=1;
        for(int i=0;i<N;i++){
            if(sum+A[i]<=mid){
                sum+=A[i];
            }
            else{
                cnt++;
                if(cnt>M or A[i]>mid){
                    return false;
                }
                sum=A[i];
            }
        }
        return true;
    }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int s=0,e=0;
        for(int i=0;i<N;i++){
            s=max(s,arr[i]);
            e+=arr[i];
        }
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPossible(arr,N,K,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
