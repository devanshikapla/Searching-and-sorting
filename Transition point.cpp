int transitionPoint(int arr[], int n) {
    // code here
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while(start <= end){
        int mid = (start + (-start + end)/2);
        if(arr[mid] == 1){
            if(arr[mid - 1] == 0){
                ans = mid;
                break;
                
            }
            else{
                end = mid - 1;
            }
        }
        else if(arr[mid] < 1){
            start = mid + 1;
        }
    }
    return ans;
}
