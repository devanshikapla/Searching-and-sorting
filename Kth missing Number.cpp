int missingK(vector < int > vec, int n, int k) {
    // Write your code here.
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = (start + (-start + end)/2);
        int missing = vec[mid] - (mid + 1);
        if(missing < k){
            start = mid + 1;
        }
        else{
            end = mid  - 1;
        }
    }
    return start + k;
}
