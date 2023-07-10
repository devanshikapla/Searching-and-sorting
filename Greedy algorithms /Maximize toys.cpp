int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        //sorting the array 
        //{1,5,10,12,111,200 , 1000};
        sort(arr.begin() , arr.end());
        int cnt = 0;
        for(int i = 0 ; i < N; i++){
            if(arr[i] <= K){
                K = K - arr[i];
                cnt++;
            }
            else{
                break;
            }
        }
        return cnt;
    }
