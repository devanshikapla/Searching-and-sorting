int findDays(int arr[] , int cap , int n){
        int days = 1;
        int load = 0;
        for(int i = 0 ; i < n ; i++ ){
            if(arr[i] + load > cap){
                days ++;
                load = arr[i];
            }
            else{
                load += arr[i];
            }
        }
        return days;
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int start = *max_element(arr , arr + N);
        int sum = 0;
        for(int i = 0 ; i < N ; i++){
            sum = sum + arr[i];
        }
        int end = sum;
        while(start <= end){
            int mid = (start + (-start + end)/2);
            int numberOfDays = findDays(arr , mid , N);
            if(numberOfDays <= D){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return start;
    }
